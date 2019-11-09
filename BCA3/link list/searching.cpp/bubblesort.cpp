#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[6],i,j,n,temp;
    cout<<"enter 5 no. :"<<endl;
    for(i=0;i<6;i++)
    {
            cin>>arr[i];   
        //n = 6;
    
    for(i=0;i<6;i++)
    {
        for(j=0;j<=6-i-1;j++)
            {
                if(arr[j-1]>arr[j])
                    {
                        temp = arr[j-1];
                        arr[j-1] = arr[j];
                        arr[j] = temp;
                    }
            }
    }
    cout<<"result :"<<endl;
        for(i=0;i<6;i++)
            {
                cout<<arr[i]<<endl;
            }                  
}