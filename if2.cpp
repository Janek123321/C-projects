#include <iostream>
using namespace std;

int main()
{
    // int y;
    // cout<<"Podaj liczbe a wypisze odpawiadajaca jej liczbe w funkcji: "<<endl;
    // cin>>y;
    // if (y<0){
    //     cout<<"-1";
    // }
    // else if (y==0) {
    //     cout<<"0";
    // }
    // else {
    //     cout<<"1";
    // }

    int x;
    cout << "Podaj liczbe a wypisze odpawiadajaca jej liczbe w funkcji: " << endl;
    cin >> x;

    if (x <= 10)
    {
        cout << "10";
    }

    else if (x > 10 && x < 20)
    {
        cout << "20";
    }

    else
    {
        cout << "30";
    }

    return 0;
}