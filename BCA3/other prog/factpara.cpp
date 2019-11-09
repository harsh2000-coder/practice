#include <iostream>
class ABC
{
private:
long  fact;
public:
// Parameterized Constructor
ABC(int n) 
{
fact=1;
cout<<"output ="<<getFact(n);
}
long getFact(int n) 
{ 
    fact = 1;
 	for(int i = 1; i <=n; i++) 
 			fact = fact * i; 
 			return fact;
}
};
int main()
{
 	int n;
 	cout << "Enter any number : ";
    cin>> n;
// Constructor called
ABC f(n);
}