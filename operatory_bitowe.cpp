#include <iostream>
using namespace std;
int main()
{
int liczba = 7; // 0111
int wynik;
wynik = liczba & liczba; // 0111 AND na bitach liczby
cout<<wynik<<endl;
wynik = liczba | liczba; // 0111 OR na bitach liczby
cout<<wynik<<endl;
wynik = liczba ^ liczba; // 0000 XOR na bitach liczby
cout<<wynik<<endl;
wynik = ~liczba; // -1000
cout<<wynik<<endl;
wynik = liczba << 2; // 11100
cout<<wynik<<endl;
wynik = liczba >> 1; // 0011
cout<<wynik<<endl;
wynik=5&10;
cout<<wynik<<endl;
wynik=5|10;
cout<<wynik<<endl;
// wynik=~(12);
// cout<<wynik<<endl;
cout<<(11>>2)<<endl;
cout<<(11<<3)<<endl;
return 0;
}