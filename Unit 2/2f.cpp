//destructor(student)
#include<iostream>
using namespace std;
class student{
    string name;
    public:
    student(string n){name = n;cout<<"consturctor called for "<<name<<endl;}
    ~student(){cout<<"destructor called for "<<name<<endl;}
};
int main(){
    student s1("sandeep");
    return 0;
}