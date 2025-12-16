#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    int roll;
    int cls;
    double gpa;
    student(int roll,int cls,double gpa) 
    {
        this->roll=roll;
        this->cls=cls;
       this->gpa=gpa; 
    }
};

student *fun()
{
    student sayed(45,13,5.00);
    student *p=&sayed;
    return p;
}

int main()
{

    student *p=fun(); // aibabe fun k call
    cout<<p->roll<<" "<< p->cls<<" "<<p->gpa<<" "<<endl;
   return 0;
}