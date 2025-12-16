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
    student *sayed=new student(5,4,6.6);
    return sayed;
}

int main()
{

    student *p= fun();
    cout<<p->roll<<" "<<p->cls<<" "<<p->gpa<<" "<<endl;

}