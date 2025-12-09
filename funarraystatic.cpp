#include <bits/stdc++.h>
using namespace std;
 
int * fun()    // format ati airkm
 {
  int a[5]; // static 
  for(int i=0;i<5;i++)
  {
    cin>> a[i];

  }
  return a;
}

int main()
{
    int *x=fun();
   for(int i=0;i<5;i++)// kono out put show korbe na
   {
    cout << x[i];
   }


    return 0;
}