#include <bits/stdc++.h>
using namespace std;
 
int * fun()    // format ati airkm
 {
  int *a=new int[5];    // dynamic
  for(int i=0;i<5;i++)
  {
    cin>> a[i];

  }
  return a;
}

int main()
{
    int *x=fun();  /// fortmat ta airkm e
   for(int i=0;i<5;i++)
   {
    cout << x[i]<<" ";
   }


    return 0;
}