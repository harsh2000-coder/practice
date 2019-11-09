#include<iostream>
using namespace std;
 
class factorial
{
	private:
			int n,i,f;
	public:
	factorial()
		{
			cout<<"enter any number :";
			cin>>n;
		}		 
	void calc();
	void display();
};
void factorial::calc()
{
	f=1;
    for( i=1;i<=n;i++)
        f=f*i;
}
void factorial::display()
{
		cout<<"Factorial of [ "<<n<<" ] is :: "<<f<<endl;
}
 
int main ()
{
	factorial f;
	f.calc();
	f.display();
}
