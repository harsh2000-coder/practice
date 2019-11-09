#include<iostream>
using namespace std;
class ABC
{
    int a,b,c;
    public:
    ABC(int x, int y)
    {
    a = x;
    b = y;
    }
void print()
  {
    cout<<"value of A "<<a<<endl;
    cout<<"value of B "<<b<<endl;
  }
};

int main()
{
ABC obj(4,5);
obj.print();
}