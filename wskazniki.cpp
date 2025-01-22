#include <iostream>
using namespace std;
struct dataUrodzenia
{
    int dzien;
    int miesiac;
    int rok;
};
// Definicja klasy Uczen:
class Uczen
{
public:
    string imie;
    string nazwisko;
    string klasa;
    int grupa;
    int nrDziennik;
    dataUrodzenia dataUrodzenia;

    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "klasa: " << klasa << endl;
        cout << "grupa: " << grupa << endl;
        cout << "numer w dzienniku: " << nrDziennik << endl;
        cout << "data urodzenia: " << dataUrodzenia.dzien << " " << dataUrodzenia.miesiac << " " << dataUrodzenia.rok << endl;
    }
};
int main()
{
    // Deklaracja zmiennej wskaźnikowej (wskaźnika) w_uczen na dowolny obiekt należący do typu Uczen:
    Uczen *w_uczen;

    // Utworzenie obiektu typu Pracownik (instancji klasy Uczen) wskazywanego przez wskaźnik w_uczen:
    w_uczen = new Uczen();

    // Nadanie wartości zmiennym członkowskim utworzonego obiektu:
    w_uczen->imie = "Jan";
    w_uczen->nazwisko = "Kowalski";
    w_uczen->klasa = "1TM";
    w_uczen->grupa = 1;
    w_uczen->nrDziennik = 100;
    w_uczen->dataUrodzenia.dzien = 11;
    w_uczen->dataUrodzenia.miesiac = 11;
    w_uczen->dataUrodzenia.rok = 2010;
    // Prezentacja danych zapisanych w zmiennych członkowskich obiektu na ekranie monitora:
    w_uczen->wyswietlDane();

    // Usunięcie (zniszczenie) obiektu wskazywanego przez wskaźnik w_uczen:
    delete w_uczen;

    return 0;
}
