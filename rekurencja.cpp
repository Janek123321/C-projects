#include <iostream>
#include <cstdio>
using namespace std;
int sequence(int n)
   {
      if (n == 1)
      {
         return 1;
      }
      else
      {
         return 3*sequence(1) - sequence(1)*sequence(1);
      }
   }
int main()
{
   cout<<sequence(4);
   return 0;
}