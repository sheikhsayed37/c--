#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5]; 
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int *b=new int[7];  
     for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    b[5]=10;
     b[6]=11;
    delete[] a;  // a ke delete na korle output ashe na... ata moloto heap mamory
         // teke a ke kete dilam j erpr baki kaj 
    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
}