#include <iostream>
using namespace std;
int main()
{

    int i;
    for (i = 0; i < 10; i++)
    {
        cout << '*';
    }
    cout << endl;

    i = 0;
    do
    {
        i++;
        cout << '*';
    } while (i < 10);
    cout << endl;

    i = 0;
    while (i < 10)
    {
        cout << '*';
        i++;
    }

    return 0;
}