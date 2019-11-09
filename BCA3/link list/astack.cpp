#include<iostream>
using namespace std;
struct stack
{
    int array[10];
    int pos = (-1);
}s;


void push(int data)
{
    if(s.pos<9)
        {
            s.array[++s.pos] = data;
        }
    else
        {
            cout<<"stack is overflow";  
        }        
}
void display()
{
    int i;
    for(i=0;i<=s.pos;i++)
    {
        cout<<s.array[i]<<endl;
    };
}
void pop()
{
   if(s.pos<0)
       {
           cout<<"stack is empty";
        }
    else
       {
           s.pos --;
        }        
}
int main()
{

    push(2);
    push(5);
    push(7);
    push(2);
    push(5);
    push(7);
    push(21);
    push(51);
    push(71);
    pop();
    pop();
    pop();
    display();
}