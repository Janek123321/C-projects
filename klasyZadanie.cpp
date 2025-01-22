#include <iostream>
using namespace std;

class Osoby
{
private:
    int id;
    string imie;

public:
    static int liczbaInstancji;

    Osoby();
    Osoby(int podaneId, string podaneImie);
    void setId(int podaneId);
    void setImie(string podaneImie);
    int getId();
    string getImie();
    void wypiszImie(string podaneImie);
};

int Osoby::liczbaInstancji = 0;

Osoby::Osoby()
{
    id = 0;
    imie = "";
    liczbaInstancji++;
}

Osoby::Osoby(int podaneId, string podaneImie)
{
    id = podaneId;
    imie = podaneImie;
    liczbaInstancji++;
}

void Osoby::setId(int podaneId)
{
    id = podaneId;
}

void Osoby::setImie(string podaneImie)
{
    imie = podaneImie;
}

int Osoby::getId()
{
    return id;
}

string Osoby::getImie()
{
    return imie;
}

void Osoby::wypiszImie(string podaneImie)
{

    if (imie != "")
    {
        cout << "Czesc " << podaneImie << " mam na imie " << imie;
    }
    else
    {
        cout << "brak danych";
    }
}

int main()
{
    int id;
    string imie1, imie2;

    cout << "podaj id\n";
    cin >> id;

    cout << "podaj imie\n";
    cin >> imie1;

    cout << "podaj drugie imie\n";
    cin >> imie2;

    Osoby osoba1;

    osoba1.setId(id);
    osoba1.setImie(imie1);

    osoba1.wypiszImie(imie2);
    cout << "\nliczba obiektow: " << Osoby::liczbaInstancji << endl;

    cout << "podaj id\n";
    cin >> id;

    cout << "podaj imie\n";
    cin >> imie1;

    cout << "podaj drugie imie\n";
    cin >> imie2;

    Osoby osoba2(id, imie1);
    osoba2.wypiszImie(imie2);
    cout << "\nliczba obiektow: " << Osoby::liczbaInstancji;
    return 0;
}