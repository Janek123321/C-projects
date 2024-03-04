#include <iostream>
using namespace std;
int main()
{
    int a = 18, b = 12;

    while (a > 0)
    {
        if (a == b)
        {
            cout << a << endl;
            return 0;
        }
        if (a > b)
        {
            a -= b;
        }
        if (a < b)
        {
            b -= a;
        }
    }
    return 0;
}