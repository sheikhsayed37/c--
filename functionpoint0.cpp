#include <iostream>
using namespace std;
int *p;
void fun()
{
 
int x=101;// static variable hisebe
p=&x;

 cout<<*p<<endl;
return;
}

int main()
{
    fun();
    cout<<*p<<endl;
    return 0;
}