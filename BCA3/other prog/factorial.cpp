#include<iostream>
using namespace std;

class factorial 
{   int f, n, i ;
    public:
    void fact();
    void display();
};
 
void factorial::fact()
{
    f=1;
    cout<<"\nEnter a Number:";
    cin>>n;
    for( i=1;i<=n;i++)
        f=f*i;
}
 
void factorial::display()
{
   cout<<"\n Factorial of "<<n<<" is "<<f;
}
 
int main()
{
    factorial obj;  
    obj.fact();
    obj.display();
}
