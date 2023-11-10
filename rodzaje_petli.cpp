#include <iostream>
using namespace std;
int main()
{

    int suma = 0;
    int i;
    for (i = 10; i < 100; i++)
    {
        suma = suma + i;
    }
    cout << suma << endl;
    
    suma = 0;
    i = 9;
    do
    {
        i++;
        suma = suma + i;
    } while (i < 99);
    cout << suma << endl;
    
    suma = 0;
    i = 10;
    while (i < 100)
    {
        suma = suma + i;
        i++;
    }
    cout << suma;

    return 0;
}