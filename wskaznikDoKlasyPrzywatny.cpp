#include <iostream>
using namespace std;
class Osoba
{
private:
    string imie;
    string nazwisko;

public:
    void setImie(string imieP)
    {
        imie = imieP;
    }
    void setNazwisko(string nazwiskoP)
    {
        nazwisko = nazwiskoP;
    }
    string getImie()
    {
        return imie;
    }
    string getNazwisko()
    {
        return nazwisko;
    }
};

int main()
{
    Osoba *w_osoba;

    w_osoba = new Osoba();

    w_osoba->setImie("Jan");
    w_osoba->setNazwisko("Kowalski");

    cout<<"Imie: "<<w_osoba->getImie()<<endl<<"Nazwisko: "<<w_osoba->getNazwisko();

    delete w_osoba;

    return 0;
}
