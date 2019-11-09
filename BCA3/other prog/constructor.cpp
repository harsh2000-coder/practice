#include<iostream>
using namespace std;
class ABC{
    int a,b,c;
    public:
        ABC(){
            cout<<"Constructor is called"; 
        }
        void print(){
            cout<<"this is print function";
        }
};
int main(){
    ABC obj;
    obj.print();
}