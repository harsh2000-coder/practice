#include<iostream>
using namespace std;
class ABC{
    int a,b,c;
    public:
        int x,y,z;
        void GetValues();
        void Sum(int, int);
        int getA();
        int getB();
        int getC();
};
void ABC::GetValues(){
    cout<<"Enter Your first value";
    cin>>a;
    cout<<"Enter Your second value";
    cin>>b;    
}
void ABC::Sum(int x,int y)
{
    c = x+y;
}
int ABC::getA(){
    return a;
}
int ABC::getB(){
    return b;
}
int ABC::getC(){
    return c;
}
int main(){
    ABC obj;
    int x,y;
    x=90,y=80;
    obj.GetValues();
    obj.getA();
    cout<<obj.getA()<<endl;
    obj.getB();
    cout<<obj.getB()<<endl;

 obj.Sum(x,y);
cout<<obj.getC()<<endl;
}