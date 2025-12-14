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

int main()
{
    student sayed(45,13,5.00);
    student saif(45,13,4.50);
    cout<<sayed.roll<<" "<< sayed.cls<<" "<<sayed.gpa<<" "<<endl;
    cout<<saif.roll<<" "<< saif.cls<<" "<<saif.gpa<<" "<<endl;
   return 0;
}