#include <iostream>
using namespace std;
// Definicja klasy bazowej Pracownik:
class Pracownik {
public:
string imie;
string nazwisko;
// Prototyp metody publicznej display():
void display();
};
// Definicja klasy pochodnej Nauczyciel:
class Nauczyciel: public Pracownik {
public:
string przedmiot;
// Prototyp metody publicznej display():
void display();
};
// Definicja klasy pochodnej Wychowawca:
class Wychowawca: public Nauczyciel {
public:
string jakiejKlasyWychowawca;
// Prototyp metody publicznej display():
void display();
};
/* UWAGA
* W każdej z klas wchodzących w skład łańcucha dziedziczenia zadeklarowano metodę publiczną o takiej samej
* nazwie oraz identycznych parametrach (liczbie i typie) i typach wartości zwracanych.
*/
// Definicje metod:
void Pracownik::display() {
cout << "imie i nazwisko pracownika: "<<imie<<" "<<nazwisko
<< endl;
}
void Nauczyciel::display() {
cout << "imie i nazwisko pracownika: "<<imie<<" "<<nazwisko<<", przedmiot: "<<przedmiot
<< endl;
}
void Wychowawca::display() {
cout << "imie i nazwisko pracownika: "<<imie<<" "<<nazwisko<<", przedmiot: "<<przedmiot<< ", wychowawca klasy: "<<jakiejKlasyWychowawca
<< endl;
}
/* UWAGA
* Implementacja i funkcjonalność każdej ze zdefiniowanych metod display() jest w ogólności dowolna.
*/
int main() {
// Utworzenie obiektu pracownik1 jako instancji klasy Pracownik:
Pracownik pracownik1;
pracownik1.imie = "Jan";
pracownik1.nazwisko = "Kowalski";
// Wywołanie metody display():
pracownik1.display();
/* UWAGA
* Powyższe wywołanie dotyczy metody display() zdefiniowanej w klasie bazowej Pracownik.
*/
// Utworzenie obiektu pracownik2 jako instancji klasy Nauczyciel:
Nauczyciel pracownik2;
pracownik2.imie = "Adam";
pracownik2.nazwisko = "Nowak";
pracownik2.przedmiot = "matematyka";
// Wywołanie metody display():
pracownik2.display();
/* UWAGA
* Powyższe wywołanie dotyczy metody display() zdefiniowanej w klasie pochodnej Nauczyciel.
*/
// Utworzenie obiektu pracownik3 jako instancji klasy Wychowawca:
Wychowawca pracownik3;
pracownik3.imie = "Jan";
pracownik3.nazwisko = "Kochanowski";
pracownik3.przedmiot = "polski";
pracownik3.jakiejKlasyWychowawca = "43";
// Wywołanie metody display():
pracownik3.display(); // zostanie wywołana metoda zdefiniowana w klasie pochodnej Wychowawca
return 0;
}