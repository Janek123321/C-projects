#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int liczba=4;
    int *pointer=&liczba;//dklaracja wskażnika pointer. Od tej chwili poniżej
    // każda nazwa pointer jest wskażnikiem czyli przechowuje adres (ma niewidzialną gwiazdkę.)
    pointer=&liczba;
    *pointer=3;//*pointer to dwie gwiazdki (widzialna + niewidzialna)
    //i nazwa pointer staje sie pojemnikiem na wartości (zmienną)
    cout<<pointer<<endl<<*pointer;
    return 0;
}



#include <iostream>
using namespace std;

class dynamicTest
{
    int id;

public:
    string name;

    void setId(int inputId)
    {
        id = inputId;
    }

    int getId()
    {
        return id;
    }
};

int main()
{

    dynamicTest *w_testClass = new dynamicTest;

    w_testClass->name = "Igor";//->to jednocześnie gwiazdka i kropka.
    (*w_testClass).name = "Igor";
    (*w_testClass).setId(12345678);//Trzeba najpierw z adresu zrobić wartość gwiazdką a potem wyłuskać kropką
    // linijka ta to to samo co powyżej tylko w dwóch krokach.
    cout << w_testClass->name << endl;
    cout << w_testClass->getId() << endl;

    delete w_testClass;
}