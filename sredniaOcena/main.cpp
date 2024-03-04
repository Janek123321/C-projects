#include <iostream>
#include "operacje.h"
using namespace std;

int main()
{
    int ileOcen;
    cout << "Podaj liczbe ocen: ";
    cin >> ileOcen;
    dane *dziennik;
    dziennik = new dane[ileOcen];

    pobieranieOcen(dziennik, ileOcen);
    liczenieSredniej(dziennik, ileOcen);

    return 0;
}