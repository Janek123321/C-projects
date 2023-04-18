#include <iostream>
using namespace std;

int main()
{

    float arg;
    cout<<"Podaj liczbe, jesli jest dodatnia lub zerowa wypisze 0 a jesli ujemna to 1\n";
    cin>>arg;

    if(arg<0)
    cout<< "1";

    else 
    cout<<"0";
    

return 0;
}