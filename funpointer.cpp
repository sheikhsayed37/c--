#include <iostream>
using namespace std;
int *p;
void fun()
{
 int *x=new int; //dynamic variable hisebe
 *x=10;
 p=x;

 cout<<*p<<endl;
return;
}

int main()
{
    fun();
    cout<<*p<<endl;
    return 0;
}