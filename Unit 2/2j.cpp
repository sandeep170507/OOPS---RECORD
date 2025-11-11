#include<iostream>
using namespace std;
class arrayHolder{
    int*arr;
    public:
    arrayHolder(int size){arr=new int[size];cout<<"array created:"<<endl;}
    ~arrayHolder(){delete[]arr;cout<<"array destroyed:"<<endl;}
};
int main(){
arrayHolder a(5);
return 0;
}