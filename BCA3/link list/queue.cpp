#include<iostream>
using namespace std;
struct queue
{
    int first=0;
    int last=-1;
    int array[10];
}Q;
void push(int data)
{
    if(Q.last<9)
        {
            Q.array[++Q.last] = data;
        }
    else
        {
            cout<<"queue is overflow"; 
         }
}
void search(int SH)
{
    int i,f=0;
    for(i=Q.first;i <= Q.last;i++)
        {
            if(SH == Q.array[i])
                {
                    f = 1;
                    break;
                }
        }
    if(f==1)
        {
            cout<<"value exist";
        }
    else
        {
            cout<<"value not exist";
        }        
}

void pop()
{
    if(Q.first < Q.last)
        {
            Q.first ++;
        }
    else
        {
            cout<<"queue is empty";
        }    
}
void display()
{
    int i;
    for(i=Q.first;i<=Q.last;i++)
        {
            cout<<Q.array[i]<<endl;
        };
}
int main()
{

    push(2);
    push(5);
    push(7);
   // pop();
    display();
    int val;
    cout<<"enter the value for searching";
    cin>>val;
    search(val);
}