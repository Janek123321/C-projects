#include <iostream>
using namespace std;

int main()
{

int liczba ;
cout<<"podaj liczbę a powiem czy jest czy dodatnia ujemna"<<endl;
cin>>liczba;
cout << "Liczba = " << liczba << endl;
string wb;
// Zastosowanie instrukcji warunkowych:
if (liczba > 0) 
wb = "dodatnia";
if (liczba < 0) 
wb = "ujemna"; //do ifa przyklejona jest tylko następna instrukcja
cout << "Znak liczby: " << wb << endl;

return 0;
}