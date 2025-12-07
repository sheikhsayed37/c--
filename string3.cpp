#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cin.ignore();// ata na dile oo hello world print korbe na
                    // mane input 13 porer space take count kore bose tai cin.ignore disi
    char a[100];
    cin.getline(a,100);
    cout<<x<<endl<<a<<endl;
    
}