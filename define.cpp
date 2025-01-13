#include <iostream>
#include <cmath>

#define OBWOD(a, b) (a * 2 + b * 2)
#define POLE(a, b) (a * b)

#define PARAMETRY(a, b)                                \
    std::cout << "Podaj bok prostokata" << endl;       \
    std::cin >> a;                                     \
    std::cout << "Podaj drugi bok prostokata" << endl; \
    std::cin >> b;

using namespace std;
int main()
{
    int a;
    int b;
    PARAMETRY(a, b);

#ifdef POLE
    std::cout << "Pole:" << POLE(a, b) << endl;
#endif

#ifndef POLE
    std::cout << "Pole:" << a * b;
#endif

#ifdef OBWOD
    std::cout
        << "Obwód:" << OBWOD(a, b) << endl;
#endif
#ifndef OBWOD
    std::cout << "Obwod:" << 2 * (a + b);
#endif

    return 0;
}