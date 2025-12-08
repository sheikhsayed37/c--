#include <iostream>
using namespace std;
int main()
{
   
    int *x=new int[7]; // dynamic way te
for(int i=0;i<5;i++)
{
    cin>>x[i];
}
for(int i=0;i<5;i++)
{
    cout<<x[i]<<" ";
}

}