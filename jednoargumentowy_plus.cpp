#include <iostream>

int main()
{
    char c = 'j'; // j=106 ASCII
    int n1 = 1;
    unsigned char n2 = 1;
    unsigned int n3 = 1;
    int liczba = (int)c;
    // liczba=c;
    // int k=n2;
    std::cout << liczba << "\n";
    std::cout << "char: " << c << "\n"
              << " int: " << +c << '\n'
              << "-1, where 1 is signed: " << -n1 << '\n'
              << " unsigned char: " << n2 << '\n'
              << "-1, where 1 is unsigned char: " << -n2 << '\n'
              << "-1, where 1 is unsigned int: " << -n3 << '\n';
    char a[3];
    std::cout << "size of array: " << sizeof a << '\n'
              << "size of pointer: " << sizeof +a << '\n';
    return 0;
}