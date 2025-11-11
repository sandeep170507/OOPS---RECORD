#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    public:
    student(string n,int r){name = n; roll=r;}
    void display(){cout<<"name:"<<name<<", roll:"<<roll<<endl;}
};
int main(){
    student s1("sandeep",41);
    s1.display();
    return 0;
}