#include <iostream>
using namespace std;

int main()
{

    int suma = 0;
    int wynik = 0;
    int wynik2 = 0;
    int i;
    for (i = 1; i <= 100; i++)
    {
        suma = i;
        if (suma % 2 == 0)
        {
            wynik = wynik + suma;
        }
        else
        {
            wynik2 = wynik2 + suma;
        }
    }
    cout << wynik << endl;
    cout << wynik2 << endl;
    return 0;
}