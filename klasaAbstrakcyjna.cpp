#include <iostream>
using namespace std;
// Definicja abstrakcyjnej klasy bazowej Osoba:
class Osoba
{
public:
    // Deklaracje zmiennych członkowskich:
    string imie;
    string nazwisko;
    /* UWAGA
     * Klasa abstrakcyjna może zawierać deklaracje zwykłych — instancyjnych zmiennych i metod członkowskich.
     */
    // Deklaracja metody abstrakcyjnej — funkcji czysto wirtualnej:
    virtual void wyswietlDane() = 0;
};
// Definicja klasy pochodnej Pracownik:
class Pracownik : public Osoba
{
public:
    Pracownik() {};
    Pracownik(string imieP, string nazwiskoP, string stanowiskoP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        stanowisko = stanowiskoP;
    }
    string stanowisko;
    // Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
    void wyswietlDane()
    {
        cout << imie << " " << nazwisko << ", " << stanowisko << endl;
    }
    /* UWAGA
     * Metoda abstrakcyjna zadeklarowana w bazowej klasie abstrakcyjnej powinna zostać zdefiniowana
     * w jej klasie pochodnej.
     */
};
// Definicja klasy pochodnej Uczen:
class Uczen : public Osoba
{
public:
    Uczen() {};
    Uczen(string imieP, string nazwiskoP, string klasaP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        klasa = klasaP;
    }
    string klasa;
    // Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
    void wyswietlDane()
    {
        cout << imie << " " << nazwisko << ", " << klasa << endl;
    }
};

int main()
{
    Osoba *osoba = new Pracownik("Jan", "Kowalski", "nauczyciel");
    cout << "DANE PRACOWNIKA:" << endl;
    osoba->wyswietlDane();

    osoba = new Uczen("Maria", "Nowak", "4A");
    cout << "DANE UCZNIA:" << endl;
    osoba->wyswietlDane();
    return 0;
}