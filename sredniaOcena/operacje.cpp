#include <iostream>
using namespace std;
struct dane
{
    double ocena;
    int waga;
};

void pobieranieOcen(dane *dziennik, int liczbaOcen)
{
    for (int i = 0; i < liczbaOcen; i++)
    {
        cout << "Podaj ocene: ";
        cin >> dziennik[i].ocena;

        cout << "Podaj wage: ";
        cin >> dziennik[i].waga;
    }
}

void liczenieSredniej(dane *dzienniczek, int liczbaOcen)
{
    double liczOceny, razemOcen = 0, wagaLacznie;
    for (size_t i = 0; i < liczbaOcen; i++)
    {
        liczOceny = dzienniczek[i].ocena * dzienniczek[i].waga;
        razemOcen = razemOcen + liczOceny;
        liczOceny = 0;
    }

    for (int i = 0; i < liczbaOcen; i++)
    {
        wagaLacznie = wagaLacznie + dzienniczek[i].waga;
    }

    cout << "srednia ocen: " << razemOcen / wagaLacznie;
}
