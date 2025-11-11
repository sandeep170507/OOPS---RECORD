#include<iostream>
#include<fstream>
using namespace std;
class fileHandler{
    ofstream file;
    public:
    fileHandler(){file.open("data.txt");cout<<"file opened"<<endl;}
    ~fileHandler(){file.close();cout<<"file closed"<<endl;}
};
int main(){
    fileHandler f;
    return 0;
}