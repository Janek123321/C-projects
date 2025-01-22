#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include "Windows.h"
using namespace std;
using namespace std::chrono_literals;
using namespace std::chrono;

inline void dodaj(int liczba, int drugaLiczba)
{
    cout << liczba + drugaLiczba;
}

int main()
{
    auto start = high_resolution_clock::now();
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    dodaj(5, 5);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}