#include<iostream>
using namespace std;
class Abc{
    public:
    void print(); //member function
    friend void show();
};

void Abc::print()
{
    cout<<"This is print function ";
}
void show()
{
    cout<<"this is a friend function ";
}
int main()
{
    Abc obj;
    obj.print();
    show();
}