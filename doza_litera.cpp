#include <iostream>
using namespace std;

int main()
{

int x=0;
char litera;
cout<<"Podaj litere a powiem ci czy jest mala czy duza: "<<endl;
cin>>litera;

x = int(litera);

if(x>=65 && x<=90 || x>=97 && x<=122) {
    if(x>=65 && x<=90) {
        cout<<"Wpisales duza litere"<<endl;
    }
    else {
        cout<<"Wpisales mala litere"<<endl;
    }
}
else {
    cout<<"Podales zly znak";
}
return 0;
}