#include<iostream>
using namespace std;
class bankAccount{
    int accountNumber;
    float balance;
    public:
    bankAccount(){accountNumber=0;balance=0;}
    bankAccount(int a,float b){accountNumber=a;balance=b;}
    void display(){cout<<"Account:"<<accountNumber<<",balance:"<<balance<<endl;}
};
int main(){
    bankAccount b1;
    bankAccount b2(12345,5000);
    b1.display();
    b2.display();
    return 0;
}