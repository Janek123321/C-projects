#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis1, napis2;

    cout << "Podaj liczbe z przecinkiem: ";
    cin >> napis1;
    cout << "Podaj liczbe bez przecinka: ";
    cin >> napis2;

    cout << "Liczba z przecinkiem: \n";
    cout << "napisy dodane do siebie: " << napis1 + napis1 << endl;
    cout << "napis zmieniony na double: " << stod(napis1) + stod(napis1) << endl;
    cout << "napis zmieniony na float: " << stof(napis1) + stof(napis1) << endl;
    cout << "napis zmieniony na int: " << stoi(napis1) + stoi(napis1) << endl;
    cout << "napis zmieniony na long int: " << stol(napis1) + stol(napis1) << endl;

    cout << "Liczba bez przecinka: \n";
    cout << "napisy dodane do siebie: " << napis2 + napis2 << endl;
    cout << "napis zmieniony na double: " << stod(napis2) + stod(napis2) << endl;
    cout << "napis zmieniony na float: " << stof(napis2) + stof(napis2) << endl;
    cout << "napis zmieniony na int: " << stoi(napis2) + stoi(napis2) << endl;
    cout << "napis zmieniony na long int: " << stol(napis2) + stol(napis2) << endl;

    int a = 21;//int 21
    to_string(a);//string 21

    return 0;
}