#include <iostream>
using namespace std;

int main()
{

    int wiek;
    cout << "Wpisz ile masz lat a powiem Ci czy jestes stary" << endl;
    cin >> wiek;

    if (wiek < 50)
        cout << "Jestes mlody";

    else if (wiek == 50)
        cout << "Zaraz bedziesz stary";

    else
        cout << "Jestes stary";

    return 0;
}