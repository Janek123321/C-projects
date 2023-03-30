#include <iostream>
using namespace std;
int main()
{
    char znak = 'a';
    int liczba;
    string slowo="4";
    liczba = (int)znak; // rzutowanie typu (konwersja typu)
    //liczba=(int)slowo; nie wszystko nasz kompilator skonwertuje
    cout << liczba;
    //pokonwertowac float i inne
    return 0;
}