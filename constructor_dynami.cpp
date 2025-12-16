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
    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
}

};

int main()
{

   student sakib(3,4,5.5);
   student *rakib=new student(2,4,5.5);// dynamic use korar somoy akne student use korsi
    // age sekane int use kortam karon ata class type er kaj
   cout << sakib.roll<<" "<< sakib.cls<<" "<< sakib.gpa<<" "<<endl;
   cout << (*rakib).roll<<" "<< (*rakib).cls<<" "<< (*rakib).gpa<<" "<<endl;
   return 0;
}