#include <iostream>
using namespace std;
void wypelnij(int tablica[], int rozmiar)
{
    cout << "podej rozmiar tablicy do wypełnienia\n";
    cin >> rozmiar;
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "podej " << 1 + i << " element tablicy\n";
        cin >> tablica[i];
    }
}
void wypisz(int tab[], int rozmiar)
{

    cout << "podej ile elementów chcesz wypisać z tablicy \n";
    cin >> rozmiar;
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "to jest " << 1 + i << " element tablicy\n";
        cout << tab[i] << endl;
    }
}

int main()
{
    int tab[10];

    wypelnij(tab, 10);
    wypisz(tab, 10);
    return 0;
}