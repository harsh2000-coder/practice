#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,n,arr[10],first,mid,last,search;
    bool flag = false;
    cout<<"enter 10 sort values :"<<endl;
    for(i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    cout<<"enter searching value :"<<endl;
    cin>>search;

    first = 0;
    last = 9;
    mid = (first+last)/2;

    while(first<=last)
        {
            if(arr[mid] == search)
                {
                    flag = true;
                    break;
                }
            else if(search < arr[mid])
                {
                    last = mid - 1;
                }    
             else
                {
                    first = mid + 1;
                } 
            mid = (first + last)/2;      
        }
    if(flag)
        {
            cout<<"value exists :"<<endl;
        }
    else 
        {
            cout<<"value not exist :"<<endl;
        }      
         return 0;       
}