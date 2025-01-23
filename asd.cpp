// #include <iostream>
// using namespace std;
// // Definicja klasy bazowej Pracownik:
// class Pracownik {
// public:
// string imie, nazwisko;
// // Prototyp metody publicznej zwrocDane():
// void zwrocDane();
// };
// // Definicja klasy pochodnej Nauczyciel:
// class Nauczyciel: public Pracownik {
// public:
// string przedmiot;
// // Prototyp metody publicznej zwrocDane():
// void zwrocDane();
// };
// // Definicja klasy pochodnej Wychowawca:
// class Wychowawca: public Nauczyciel {
// public:
// string klasa;
// // Prototyp metody publicznej zwrocDane():
// void zwrocDane();
// };
// /* UWAGA
// * W każdej z klas wchodzących w skład łańcucha dziedziczenia zadeklarowano metodę zwrocDane() —
// * o takiej samej nazwie oraz identycznych parametrach (liczbie i typie) i typie zwracanej wartości.
// */
// // Definicje metod instancyjnych zwrocDane():
// void Pracownik::zwrocDane() {
// cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik"
// << endl;
// cout << "Imię: " << imie << endl;
// cout << "Nazwisko: " << nazwisko << endl;
// }
// void Nauczyciel::zwrocDane() {
// cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel"
// << endl;
// cout << "Imię: " << imie << endl;
// cout << "Nazwisko: " << nazwisko << endl;
// cout << "Przedmiot: " << przedmiot << endl;
// }
// void Wychowawca::zwrocDane() {
// cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca"
// << endl;
// cout << "Imię: " << imie << endl;
// cout << "Nazwisko: " << nazwisko << endl;
// cout << "Przedmiot: " << przedmiot << endl;
// cout << "Klasa:" << klasa << endl;
// }
// /* UWAGA
// * Implementacja (i co za tym idzie — funkcjonalność) każdej ze zdefiniowanych metod zwrocDane() jest dowolna.
// */
// int main() {
// // Deklaracja wskaźnika w_pracownik typu statycznego Pracownik:
// Pracownik *w_pracownik;
// /* UWAGA
// * Zmienna w_pracownik jest zmienną statyczną, która może wskazywać (z definicji) na obiekty typu bazowego
// * Pracownik oraz obiekty klas pochodnych klasy Pracownik, czyli obiekty klas Nauczyciel i Wychowawca.
// */
// // Utworzenie obiektu pracownik1 jako instancji klasy Pracownik:
// Pracownik pracownik1;
// // Przypisanie wskaźnikowi w_pracownik adresu obiektu pracownik1:
// w_pracownik = &pracownik1;
// // Nadanie wartości zmiennym członkowskim obiektu pracownik1:
// w_pracownik->imie = "Jan";
// w_pracownik->nazwisko = "Kowalski";
// // Wywołanie metody zwrocDane():
// w_pracownik->zwrocDane(); // zostaje wywołana metoda z klasy bazowej Pracownik
// cout << endl;
// // Utworzenie obiektu pracownik2 jako instancji klasy Nauczyciel:
// Nauczyciel pracownik2;
// w_pracownik = &pracownik2;
// w_pracownik->imie = "Adam";
// w_pracownik->nazwisko = "Nowak";
// // w_pracownik->przedmiot="cweling";//nie ma wlasnosci przedmiot w klasie pracownik. Wskażnik jest do klasy pracownik.
// /* UWAGA
// * Użycie dereferencji w_pracownik-> pozwala jedynie uzyskać dostęp do elementów członkowskich klasy
// * Nauczyciel odziedziczonych po klasie bazowej Pracownik — czyli do zmiennych imie i nazwisko.
// * Dostęp do elementów członkowskich zdefiniowanych bezpośrednio w klasie pochodnej Nauczyciel nie jest
// * możliwy. Tym samym próba wykonania instrukcji przypisania: w_pracownik->przedmiot = „Informatyka”;,
// * zakończy się komunikatem o błędzie i informacją, że klasa Pracownik nie zawiera elementu członkowskiego
// * przedmiot.
// */
// // Wywołanie metody zwrocDane():
// w_pracownik->zwrocDane(); // zostaje wywołana metoda odziedziczona po klasie bazowej Pracownik
// cout << endl;
// // Utworzenie obiektu pracownik3 jako instancji klasy Wychowawca:
// Wychowawca pracownik3;
// w_pracownik = &pracownik3;
// w_pracownik->imie = "Jan";
// w_pracownik->nazwisko = "Polski";
// // w_pracownik->przedmiot = „Informatyka”; INSTRUKCJA BŁĘDNA!
// // w_pracownik->klasa = „3A”; INSTRUKCJA BŁĘDNA!
// // Wywołanie metody zwrocDane():
// w_pracownik->zwrocDane(); // zostaje wywołana metoda odziedziczona po klasie bazowej Pracownik
// pracownik3.zwrocDane();
// return 0;
// }

// #include <iostream>
// using namespace std;

// class Imie
// {
// public:
//     string imie;
// };

// class Nazwisko
// {
// public:
//     string nazwisko;
// };

// class Przedmiot
// {
// public:
//     string przedmiot;
// };
// class Klasa
// {
// public:
//     string klasa;
// };
// class Pracownik : public Imie, public Nazwisko, public Przedmiot, public Klasa
// {
// public:
//     void zwrocDane();
// };
// class Nauczyciel : public Pracownik
// {
// public:
//     void zwrocDane();
// };
// class Wychowawca : public Nauczyciel
// {
// public:
//     void zwrocDane();
// };

// void Pracownik::zwrocDane()
// {
//     cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik"
//          << endl;
//     cout << "Imię: " << imie << endl;
//     cout << "Nazwisko: " << nazwisko << endl;
// }
// void Nauczyciel::zwrocDane()
// {
//     cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel"
//          << endl;
//     cout << "Imię: " << imie << endl;
//     cout << "Nazwisko: " << nazwisko << endl;
//     cout << "Przedmiot: " << przedmiot << endl;
// }
// void Wychowawca::zwrocDane()
// {
//     cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca"
//          << endl;
//     cout << "Imię: " << imie << endl;
//     cout << "Nazwisko: " << nazwisko << endl;
//     cout << "Przedmiot: " << przedmiot << endl;
//     cout << "Klasa:" << klasa << endl;
// }

// int main()
// {

//     Pracownik *w_pracownik;

//     Pracownik pracownik1;
//     // Przypisanie wskaźnikowi w_pracownik adresu obiektu pracownik1:
//     w_pracownik = &pracownik1;
//     // Nadanie wartości zmiennym członkowskim obiektu pracownik1:
//     w_pracownik->imie = "Jan";
//     w_pracownik->nazwisko = "Kowalski";
//     // Wywołanie metody zwrocDane():
//     w_pracownik->zwrocDane(); // zostaje wywołana metoda z klasy bazowej Pracownik
//     cout << endl;
//     // Utworzenie obiektu pracownik2 jako instancji klasy Nauczyciel:
//     Nauczyciel pracownik2;
//     w_pracownik = &pracownik2;
//     w_pracownik->imie = "Adam";
//     w_pracownik->nazwisko = "Nowak";

//     w_pracownik->zwrocDane(); // zostaje wywołana metoda odziedziczona po klasie bazowej Pracownik
//     cout << endl;
//     // Utworzenie obiektu pracownik3 jako instancji klasy Wychowawca:
//     Wychowawca pracownik3;
//     w_pracownik = &pracownik3;
//     w_pracownik->imie = "Jan";
//     w_pracownik->nazwisko = "Polski";

//     w_pracownik->zwrocDane(); // zostaje wywołana metoda odziedziczona po klasie bazowej Pracownik
//     pracownik3.zwrocDane();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Imie
// {
// public:
//     string imie;
//     void zwrocDane();
// };
// class Nazwisko
// {
// public:
//     string nazwisko;
//     void zwrocDane();
// };
// class Przedmiot
// {
// public:
//     string przedmiot;
//     void zwrocDane();
// };
// class Klasa
// {
// public:
//     string klasa;
//     void zwrocDane();
// };
// class Pracownik : public Imie, public Nazwisko
// {
// public:
//     void zwrocDane();
// };
// class Nauczyciel : public Imie, public Nazwisko, public Przedmiot
// {
// public:
//     void zwrocDane();
// };
// class Wychowawca : public Imie, public Nazwisko, public Przedmiot, public Klasa
// {
// public:
//     void zwrocDane();
// };
// void Pracownik::zwrocDane()
// {
//     cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik"
//          << endl;
//     cout << "Imię: " << imie << endl;
//     cout << "Nazwisko: " << nazwisko << endl;
// }
// void Nauczyciel::zwrocDane()
// {
//     cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel"
//          << endl;
//     cout << "Imię: " << imie << endl;
//     cout << "Nazwisko: " << nazwisko << endl;
//     cout << "Przedmiot: " << przedmiot << endl;
// }
// void Wychowawca::zwrocDane()
// {
//     cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca"
//          << endl;
//     cout << "Imię: " << imie << endl;
//     cout << "Nazwisko: " << nazwisko << endl;
//     cout << "Przedmiot: " << przedmiot << endl;
//     cout << "Klasa:" << klasa << endl;
// }
// int main()
// {
//     Imie *pointer;
//     Pracownik pracownik1;
//     // Przypisanie wskaźnikowi w_pracownik adresu obiektu pracownik1:
//     pointer = &pracownik1;
//     // Nadanie wartości zmiennym członkowskim obiektu pracownik1:
//     pointer->imie = "Jan";
//     // w_pracownik->nazwisko = "Kowalski";//nazwiska nie ma w klasie bazowej Imie i wskażnik go nie obsłuży
//     // Wywołanie metody zwrocDane():
//     pointer->zwrocDane(); // zostaje wywołana metoda z klasy bazowej Pracownik
//     cout << endl;
//     // Utworzenie obiektu pracownik2 jako instancji klasy //Nauczyciel:
//     Nauczyciel pracownik2;
//     pointer = &pracownik2;
//    // pointer->zwrocDane(); //:(  z klasy Pracownik  :(.
//     return 0;
// }

#include <iostream>
using namespace std;

class Imie {
public:
string imie;
virtual void zwrocDane();
};
class Nazwisko {
public:
string nazwisko;
virtual void zwrocDane();
};
class Przedmiot {
public:
string przedmiot;
virtual void zwrocDane();
};
class Klasa {
public:
string klasa;
virtual void zwrocDane();
};
class Pracownik: public Imie, public Nazwisko {
public:
void zwrocDane();
};
class Nauczyciel: public Imie, public Nazwisko, public Przedmiot  {
public:
void zwrocDane();
};
class Wychowawca: public Imie, public Nazwisko, public Przedmiot, public Klasa  {
public:
void zwrocDane();
};
void Imie::zwrocDane() {
cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Imie"
<< endl;
cout << "Imię: " << imie << endl;
}
void Nazwisko::zwrocDane() {
cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Imie"
<< endl;
cout << "Nazwisko: " << nazwisko << endl;
}
void Przedmiot::zwrocDane() {
cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Przedmiot"
<< endl;
cout << "Przedmiot: " << przedmiot << endl;
}
void Klasa::zwrocDane() {
cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Klasa"
<< endl;
cout << "Klasa: " << klasa << endl;
}
void Pracownik::zwrocDane() {
cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik"
<< endl;
cout << "Imię: " << imie << endl;
cout << "Nazwisko: " << nazwisko << endl;
}
void Nauczyciel::zwrocDane() {
cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel"
<< endl;
cout << "Imię: " << imie << endl;
cout << "Nazwisko: " << nazwisko << endl;
cout << "Przedmiot: " << przedmiot << endl;
}
void Wychowawca::zwrocDane() {
cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca"
<< endl;
cout << "Imię: " << imie << endl;
cout << "Nazwisko: " << nazwisko << endl;
cout << "Przedmiot: " << przedmiot << endl;
cout << "Klasa:" << klasa << endl;
}
int main() {
Imie *pointer;
Pracownik pracownik1;
// Przypisanie wskaźnikowi w_pracownik adresu obiektu pracownik1:
pointer = &pracownik1;
// Nadanie wartości zmiennym członkowskim obiektu pracownik1:
pointer->imie = "Jan";
// w_pracownik->nazwisko = "Kowalski";//nazwiska nie ma w klasie bazowej Imie i wskażnik go nie obsłuży
// Wywołanie metody zwrocDane():
pointer->zwrocDane(); // zostaje wywołana metoda z klasy bazowej Pracownik
cout << endl;
// Utworzenie obiektu pracownik2 jako instancji klasy //Nauczyciel:
Nauczyciel pracownik2;
pointer=&pracownik2;
pointer->zwrocDane();//:(  z klasy Pracownik  :(.
return 0;
}