#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    int roll;
    int cls;
    double gpa;
    student(int r,int c,double g) // moloto onk student er 
    //name dia easily tar name sob declare korte prba
    {
        roll=r;
        cls=c;
        gpa=g; 
    }
};
student fun()
{
    student sayed(45,13,5.00);
    return sayed;
}

int main()
{

    student object=fun(); // student dia call kora lagbe
    cout<<object.roll<<" "<< object.cls<<" "<<object.gpa<<" "<<endl;
   return 0;
}