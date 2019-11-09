#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[5],i,n,curr_pos,prev_pos,curr_data;
    cout<<"enter 5 no. :"<<endl;
    for(i=0;i<5;i++)
        {
            cin>>arr[i];               
        }

    for(i=1;i<5;i++)
        {
            curr_data = arr[i];        //curr_data = i
            curr_pos = i;
            prev_pos = i -1;

            while(curr_data < arr[prev_pos] && prev_pos >=0)     //prev_pos = j
                {
                    arr[curr_pos] = arr[prev_pos];
                    prev_pos --;
                    curr_pos --;
                }        
            arr[curr_pos] = curr_data;
        }    
    cout<<"result\n";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }    
}        