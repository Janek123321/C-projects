#include <iostream>
using namespace std; 

int main() { 
//jak nazwać to co juz jest nazwane (swoje nazwy typów zmiennych)
//sposob pierwszy -od ponizszej linijki byte znaczy char
typedef  char byte;
//sposob drugi -od ponizszej linijki word znaczy int
using word =  int;
byte zmiennaByte;
word zmiennaWord; 
return 0;
}