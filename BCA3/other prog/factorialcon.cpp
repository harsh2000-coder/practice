#include<iostream>
using namespace std;
 
class factorial
{
	private:
			int n,i,f;
			int a;
	public:
	factorial(int x)
		{
			a = x;
		}		 
	void calc();
	void display();
};
void factorial::calc()
{	
	f=1;
	cout<<"enter any number :";
	cin>>n;
    for( i=1;i<=n;i++)
        f=f*i;
}
void factorial::display()
{
		cout<<"Factorial of [ "<<n<<" ] is :: "<<f<<endl;
}
 
int main ()
{
	factorial f(5);
	f.calc();
	f.display();
}
