#include<iostream>
using namespace std;

class circle
{
    public:
    int r;
    float pi=3.14;
    circle()
        {
            cout<<"enter the value :";
            cin>>r;
        }
    void area()
    {
        float area = pi*r*r;
        cout<<"Area of a circle is :"<<area<<endl; 
    }    
    void circumference()
    {
        float circumference = 2*pi*r;
        cout<<"Circumference of a circle is :"<<circumference<<endl;
    }
};
int main()
{
    circle c;
    c.area();
    c.circumference();
}