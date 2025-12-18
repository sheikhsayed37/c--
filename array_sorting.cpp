#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>> n;
 int a[n];

 for(int i=0;i<n;i++)
 {
    cin>> a[i];
 }

 sort(a,a+4);     // sort moloto asending decending er jonno use korte hoi
                // a[0] teke a[4] porjonto ascending korse bakita teke gese or jaigai
                 //4 5 2 8 agola ashcending hoise bakita teke gese
                 
 for(int i=0;i<n;i++)
 {
    cout << a[i]<< " ";
 }



}