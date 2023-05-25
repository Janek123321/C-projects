#include <iostream>
using namespace std;

int main()
{
int wiek;
cout<<"Podaj wiek, a napisze ci czy jest jeszcze niewolnikiem czy już się nie nadaje mafii.\n";
cin>>wiek;

(wiek < 65) ? cout<<"nadajesz sie" : cout<<"nie nadajesz sie";
return 0;
}
