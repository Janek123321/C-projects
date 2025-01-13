#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
    cout << "podaj pierszy napis: ";
    getline(cin, s1);
    cout << "podaj drugi napis: ";
    getline(cin, s2);

    s3 = s1.substr(s1.find(" "), s1.length()); // b, c
    s4 = s2.substr(s2.find(" "), s2.length()); // e, f

    s5 = s3.substr(s3.find(","), s3.length()); //, c
    s6 = s4.substr(s4.find(","), s4.length()); //, f

    s7 = s3.replace(s3.find(","), s3.length(), s6);
    s8 = s4.replace(s4.find(","), s4.length(), s5);

    s9 = s2.replace(s2.find(" "), s7.length(), s7);
    s10 = s1.replace(s1.find(" "), s8.length(), s8);
    cout << s10 << endl
         << s9;
    return 0;
}
