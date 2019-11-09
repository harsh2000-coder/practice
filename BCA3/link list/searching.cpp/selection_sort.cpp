#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[5],i,j,n,small,pos,temp;
    cout<<"enter 5 no. :"<<endl;
    for(i=0;i<5;i++)
    {                                       //for input no.
        cin>>arr[i];   
    }

    for(i=0;i<5;i++)
    {
        small = arr[i];
        pos = i;
        for(j=i;j<5;j++)
        {
            if(arr[j]<small)
                {
                    small = arr[j];
                    pos = j;
                    // cout<<small;
                }
        }
        temp = arr[pos],
        arr[pos] = arr[i];
        arr[i] = temp;
    }
    cout<<"result :"<<endl;
        for(i=0;i<5;i++)
            {
                cout<<arr[i]<<endl;
            }
}
