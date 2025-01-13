// #include <iostream>
// #include <cstring>

// using namespace std;

// int main()
// {
//     // char marka[15];
//     // char model[15];
//     // char rokProdukcji[5];

//     // cout << "podaj marke: \n";
//     // cin >> marka;
//     // cout << "podaj model: \n";
//     // cin >> model;
//     // cout << "podaj rok produkcji: \n";
//     // cin >> rokProdukcji;

//     // cout << marka << " " << model << " " << rokProdukcji << endl;

//     // char napis1[20] = "Programowanie ";
//     // char napis2[20] = "Zorientowane ";
//     // char napis3[20] = "Obiektowo";
//     // strcat(napis1, napis2);
//     // strcat(napis1, napis3);
//     // cout << napis1 << endl;

//     // char napis4[20] = "Java";
//     // char napis5[20] = "JavaScript";

//     // if (strcmp(napis4, napis5) == 0)
//     // {
//     //     cout << "napisy sa takie same"<<endl;
//     // }
//     // else
//     // {
//     //     cout << "Napisy nie sa takie same"<<endl;
//     // }

//     // char napis6[30] = "Java Runtime Environment";
//     // char napis7[20] = "Runtime";

//     // if (strstr(napis6,napis7)==nullptr)
//     // {
//     //     cout<<"lancuch nie jest pod lancuchem "<<endl;
//     // }
//     // else {
//     //     cout<<"lancuhc jest pod lancuchem"<<endl;
//     // }

//     // char napis8[30];
//     // cout<<"Podaj dwuczlonowa nazwe: \n";
//     // cin.getline(napis8,30);
//     // cout<< napis8<<endl;

//     char napis[30] = "Java";
//     char napis1[30] = "C++, JavaScript, C#";
//     char napis2[30];
//     for (int i = 0; napis1[i] != ' '; i++)
//     {
//         napis2[i] = napis1[i];
//     }
//     strcat(napis2, " ");//"C++, " 
//     strcat(napis2, napis);//"C++, Java"
//     strchr(napis1,' '); //" JavaScript, C#"
//     char *napis3=strchr(strchr(napis1,' '),',');//", C#"
//     strcat(napis2, napis3);
//     cout << napis2 << endl;

//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char imieNazwisko[30];
    char drugieImie[30];

    cout << "Podaj imię i nazwisko (oddzielone spacją): ";
    cin.getline(imieNazwisko, 30);

    cout << "Podaj drugie imię: ";
    cin.getline(drugieImie, 30);

    char napis1[30];
    strcpy(napis1, strchr(imieNazwisko, ' '));

    char napis2[30];
    strcpy(napis2, strcat(drugieImie, napis1));

    char napis3[45]; // Zwiększyłem rozmiar, aby pomieścić oba napisy i spację
    for (int i = 0; imieNazwisko[i] != ' '; i++) {
        napis3[i] = imieNazwisko[i];
    }
    strcat(napis3, " ");
    strcat(napis3, napis2);

    cout << napis3;

    return 0;
}