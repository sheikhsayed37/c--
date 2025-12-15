#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    int roll;
    int cls;
    double gpa;
    student(int r,int c,double g) 
    {
        this->roll=roll;
        this->cls=c;
       this->gpa=g; 
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

    student *p=fun(); 
    cout<<p->roll<<" "<< p->cls<<" "<<p->gpa<<" "<<endl;
   return 0;
}