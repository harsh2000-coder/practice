#include<iostream>
using namespace std;
class A
{
    public:
    void sum(int A, double B)
    {
        cout<<A<<B<<endl;
    }
    void sum(int A, int B)
    {
        cout<<A <<B <<endl;
    }
};

int main()
{
A obj;
obj.sum(2, 3);
obj.sum(9, 9.8);
}