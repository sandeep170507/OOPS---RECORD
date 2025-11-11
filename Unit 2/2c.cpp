#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;
    public:
    rectangle(int l,int b){length=l;breadth=b;}
    int area(){return length*breadth;}
};
int main(){
    rectangle r1(5,10);
    cout<<"area:"<<r1.area()<<endl;
    return 0;
}