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
int main()
{
    srand(time(NULL)); // time(NULL) to liczba (czas w sekundach od 1.1.1970, 00:00:00 in Greenwich, UK.do teraz)
    // inicjalizacja generatora liczb pseudolosowych. Żeby dostać różne liczby losowe funkcja srand musi mieć różne argumenty.
    double a = rand();                    // losuje liczbę całkowitą z przedziału od 0 do RAND_MAX=32767.
    double b = (double)rand() / RAND_MAX; // losuje liczbę całkowitą z przedziału od 0 do 1
    int c = rand() % 6 + 1;               // kostka do gry
    cout << c << endl;
    // cout<<time(NULL)<<endl;
    cout << RAND_MAX;

    return 0;
}