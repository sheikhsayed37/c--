#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]; //static
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int b[7];  //increase korsi
     for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    b[5]=10;
     b[6]=11;

    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
}