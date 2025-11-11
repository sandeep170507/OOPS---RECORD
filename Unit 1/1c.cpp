#include<iostream>
using namespace std;
class account{
    public:
    int acc_no;
    string name;
    float balance;
    void display()
    {
        cout<<"account no"<<acc_no
            <<",name:"<<name
            <<",balance:"<<balance<<endl;

    }

};
int main()
{
    account a1,a2;
    a1.acc_no =1001;
    a1.name = "ramesh";
    a1.balance = 25000.50;
    a2.acc_no =1002;
    a2.name ="sita";
    a2.balance =40000.75;
    a1.display();
    a2.display();
    return 0;
}
