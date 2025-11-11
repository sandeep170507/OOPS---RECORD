#include<iostream>
using namespace std;
class car
{
    public:
    string model;
    string company;
    float price ;
    void display()
    {
        cout<<"company:"<<company
            <<",model:"<<model
            <<",price Rs"<<price<<endl;
    }
};
int main()
{


    car c1,c2,c3;
    c1.company ="toyato";
    c1.model ="Innova";
    c1.price=2000000;
    c2.company ="Honda";
    c2.model ="city";
    c2.price =1200000;
    c3.company ="hyundai";
    c3.model ="i20";
    c3.price =8000000;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}

