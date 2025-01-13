#include <iostream>
// Dołączenie zasobów biblioteki cstdio do programu:
#include <cstdio>
using namespace std;

int main() {
float bok1, bok2, pole, obwod;
// Wyświetlenie komunikatu na ekranie monitora:
printf("Podaj długości boków prostokąta: \n");
// Wyświetlenie komunikatu:
printf("Pierwszy bok = ");
// Wprowadzenie wartości zmiennej bok1 z klawiatury:
scanf("%f",&bok1);//czyta do spacji
printf("Drugi bok = ");
scanf("%f",&bok2);
pole = bok1 * bok2;
// Wyświetlenie komunikatu pomocniczego i wartości zmiennej pole na ekranie monitora:2. 3
printf("Pole wynosi: %9.5f\n",pole);//%9.2f oznacz żę mamy max 9 pozycji w tym 2 po przecinku i wypisujemy wartość typu float
obwod = 2 * bok1 + 2 * bok2;
// Wyświetlenie komunikatu i wartości zmiennej obwod na ekranie monitora:
printf("Obwod wynosi: %6.2f\n",obwod);
return 0;
}