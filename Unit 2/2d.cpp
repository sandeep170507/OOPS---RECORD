#include<iostream>
using namespace std;
class employee{
    string name;
    int id;
    float salary;
    public:
    employee(string n,int i,float s){name = n;id =i;salary=s;}
    void display(){cout<<"name:"<<name<<",id:"<<id<<",salary:"<<salary<<endl;}
};
int main(){
    employee e1("alice",101,25000);
    e1.display();
    return 0;
}