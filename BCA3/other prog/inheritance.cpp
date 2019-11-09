#include<iostream>
using namespace std;
class A
{
    public:
    int sum(int x, int y)
    {
        return x+y;
    }
    int sub(int x, int y)
    {
        return x-y;
    }
};

class B : public A
{
    public:
    int mul(int x, int y)
    {
        return x*y;
    }
    int div(int x, int y)
    {
        return x/y;
    }    
};

int main()
{
B obj;
cout<<obj.sum(2,3)<<endl;
cout<<obj.sub(10,8)<<endl;
cout<<obj.mul(2,8)<<endl;
cout<<obj.div(10,5)<<endl;
}