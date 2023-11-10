#include <iostream>
using namespace std;
namespace pojemnosci
{
    const float cola = 0.33;
    const float flaszka = 0.5;
    const float liter = 1;
}

int main()
{

    int a = 10, b = 20, c = 5;
    cout << pojemnosci::cola * a + pojemnosci::flaszka * b + pojemnosci::liter * c << endl;

    return 0;
}