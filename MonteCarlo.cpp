#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int j=0;
    for (int i = 0; i < 10000; i++)
    {
        float a = (double)rand() / RAND_MAX / 2;
        float b = (double)rand() / RAND_MAX / 2;
        if(sqrt((a*a)+(b*b))<= 0.5){
            j++;
        }
    }
    cout<<endl<<double(j*(4/40));

    return 0;
}