#include <iostream>
using namespace std;

int main()
{
    // inicjalizacja zmiennych.
    int liczba = 'a'; // C-inicjalizacja vel inicjalizacja kopiującą  (ang. C-like initialization) (ang. copy initialization)
    // int liczba ('a'); // inicjalizacja bezpośrednia (ang. direct initialization)
    // // poniżej inicjalizacja jednolita (ang. uniform initialization) lub inicjalizacja klamrowa (ang. brace initialization)
    // int liczba {'a'}; //inicjalizacja jednolita bezpośrednia (ang. direct uniform initialization).
    // int liczba = {'a'}; //icjalizacja jednolira kopiująca (ang. copy uniform initialization).
    int liczba1{}; // inicjalizacja jednolita  (ang. zero initialization)
    // cout << liczba1;
    //Deklaracja zmiennej z dedukcją typu:
    //zmienna3 typu double
    int zmienna1{1};
    decltype(zmienna1) zmienna2;
    zmienna2 = 2;
    decltype(zmienna2 + 1.1) zmienna3;
    zmienna3 = 3.1;
    cout <<zmienna3<<endl;
    cout<<sizeof(zmienna3);
    //zmienna3 typu int
    // int zmienna1{1};
    // decltype(zmienna1) zmienna2;
    // zmienna2 = 2;
    // decltype(zmienna2 + 1) zmienna3;
    // zmienna3 = 3.1;
    // cout <<zmienna3<<endl;
    // cout<<sizeof(zmienna3);
//slowo kluczowe auto robi to samo co powyzej:
// int zmienna1 = 1;
// auto zmienna2 = zmienna1 + 1;
// auto zmienna3 (zmienna2 + 1);
// auto zmienna4 {zmienna3 + 1};
    return 0;
}