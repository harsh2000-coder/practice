#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void sum()
    {
        int st;
        st=a;
        cout<<"Enter a value :- ";
        cin>>st;
        if(st==5)
        {
            cout<<"True";
        }
        else
        {
            cout<<"False";
        }
    }
};

int main()
{
    A obj;
    obj.sum();
}