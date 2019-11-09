#include<iostream>
using namespace std;
int main()
{
    int i,j,row;
    cout<<"enter the rows:";
    cin>>row;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j;        
        }

    cout<<"\n";        
    }
}