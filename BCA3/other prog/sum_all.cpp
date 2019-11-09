#include<iostream>
using namespace std;
class A
{
    public:
    int sum();
    int sub();
    int mul();
    int div();
};

int A::sum()
{
    int a,b,sum;
    cout<<"enter two values a & b:\n";
    cin>>a>>b;
    sum=a+b;
    return sum;
}


int A::sub()
{
    int a,b,sub;
    cout<<"enter two values a & b:\n";
    cin>>a>>b;
    sub=a-b;
    return sub;
}


int A::mul()
{
    int a,b,mul;
    cout<<"enter two values a & b:\n";
    cin>>a>>b;
    mul=a*b;
    return mul;
}


int A::div()
{
    int a,b,div;
    cout<<"enter two values a & b:\n";
    cin>>a>>b;
    div=a/b;
    return div;
}


int main()
{
    A obj;
    int a;
    a = obj.sum();
    cout<<"This is sum :- "<<a<<endl;
    int b;
    b = obj.sub();
    cout<<"This is sub :- "<<b<<endl;
    int c;
    c = obj.mul(); 
    cout<<"This is mul :- "<<c<<endl;  
    int d;
    d = obj.div();
    cout<<"This is div :- "<<d<<endl;
}