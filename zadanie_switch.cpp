#include <iostream>
using namespace std;

int main()
{
    // int lekcje;
    // cout << "Podaj numer lekcji a napisze ci jaka masz teraz lekcje: " << endl;
    // cin >> lekcje;
    // switch (lekcje)
    // {
    // case 1:
    //     cout << "Masz teraz biologie\n";
    //     break;
    // case 2:
    //     cout << "Masz teraz chemie\n";
    //     break;
    // case 3:
    //     cout << "Masz teraz fizyke\n";
    //     break;
    // case 4:
    //     cout << "Masz teraz matematyke\n";
    //     break;
    // case 5:
    //     cout << "Masz teraz praktyke\n";
    //     break;
    // case 6:
    //     cout << "Masz teraz praktyke\n";
    //     break;
    // default:
    //     cout<<"Nie masz lekcji";
    // }

    int koniec;
    cout << "Podaj numer lekcji a napisze Ci ile lekcji masz do konca: \n";
    cin >> koniec;
    switch (koniec)
    {
    case 1:
        cout << "do konca zostaly ci 6 lekcje";
        break;
    case 2:
        cout << "do konca zostaly ci 5 lekcje";
        break;
    case 3:
        cout << "do konca zostaly ci 4 lekcje";
        break;
    case 4:
        cout << "do konca zostaly ci 3 lekcje";
        break;
    case 5:
        cout << "do konca zostaly ci 2 lekcje";
        break;
    case 6:
        cout << "do konca zostaly ci 1 lekcje";
        break;

    default:
        cout << "Nie masz lekcji";
        break;
    }

    //   SWITCH BEZ BREAK

    //     switch (koniec)
    // {
    // case 1:
    //     cout << "do konca zostaly ci 6 lekcje";

    // case 2:
    //     cout << "do konca zostaly ci 5 lekcje";

    // case 3:
    //     cout << "do konca zostaly ci 4 lekcje";

    // case 4:
    //     cout << "do konca zostaly ci 3 lekcje";

    // case 5:
    //     cout << "do konca zostaly ci 2 lekcje";

    // case 6:
    //     cout << "do konca zostaly ci 1 lekcje";
    //     break;
    // default:
    //     cout<<"Nie masz lekcji";
    //     break;
    // }

    return 0;
}
