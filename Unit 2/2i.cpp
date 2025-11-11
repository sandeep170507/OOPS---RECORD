#include<iostream>
using namespace std;
class employee{
    string name;
    public:
    employee(string n){name = n;cout<<"employee created:"<<name<<endl;}
    ~employee(){cout<<"employee destroyed:"<<name<<endl;}
};
int main(){
    employee e1("alice");
    return 0;
}