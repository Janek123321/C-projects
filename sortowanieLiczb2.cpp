#include <iostream>
using namespace std;
void sortowanieRosnaco(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp = 0;
    liczbaElementowTablicy = 5;
    for (int i = 1; i < liczbaElementowTablicy; i++)
    {
        for (int j = i; j < liczbaElementowTablicy; j++)
        {
            if (tablicaPrzeszukiwana[i] < tablicaPrzeszukiwana[i - 1])
            {
                temp = tablicaPrzeszukiwana[i];
                tablicaPrzeszukiwana[i] = tablicaPrzeszukiwana[i - 1];
                tablicaPrzeszukiwana[i - 1] = temp;
            }
        }
    }
}
void wypelnij(int tablicaDoWypełnienia[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        srand((i + 2) * time(NULL));
        tablicaDoWypełnienia[i] = rand() % 11;
    }
}
void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << " ";
    }
}
int main()
{
    int tablicaTestowa[5];
    wypelnij(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    cout << endl;
    sortowanieRosnaco(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    return 0;
}
