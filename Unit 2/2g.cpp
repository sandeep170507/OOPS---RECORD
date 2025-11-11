
#include<iostream>
using namespace std;
class bankAccount{
    int*balance;
    public:
    bankAccount(int b){balance =new int(b);cout<<"account created"<<endl;}
    ~bankAccount(){delete balance;cout<<"account destroyed"<<endl;}
};
int main(){
    bankAccount b1(5000);
    return 0;
}