#include <bits/stdc++.h>
using namespace std;
class student 
{
    public:
    char name[100];
    int roll;
    double gpa;
};



int main()
{
 student a; 
 a.roll=10;
 a.gpa=4.5;
 char temp[122]="Sayed";  //  char direct declare korte hoi aijoonno airkm kora lagse
 strcpy(a.name,temp);
 cout << a.name <<" "<< a.roll<< " "<< a.gpa<<endl;
return 0;


}