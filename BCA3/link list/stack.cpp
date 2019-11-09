#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void push(node **last,int data)
{
    // node *ref = *top;
    // node *new_node = (node*)malloc(sizeof(node*));
    // new_node->data = data;
    // new_node->next = NULL;

    // ref->next = new_node;
    // *top = new_node;

    node *new_node = (node*)malloc(sizeof(node*));
    node *ref = *last;
    new_node-> data= data;
    new_node-> next = NULL;
    ref->next = new_node;
    *last = new_node;
}
void display(node **top)
{
    node *new_node=*top;
    while(new_node!=NULL)
    {
        cout<<new_node->data;
        new_node = new_node -> next;
    }
}
void pop(node **top)
{
node *new_node;
new_node = *top;
*top = (*top)->next;
new_node->data--;
}
int main()
{
    node *top,*mid,*last;
    top = (node *)malloc(sizeof(node *));
    mid = (node *)malloc(sizeof(node *));
    last = (node *)malloc(sizeof(node *));
    top->data= 9;
    top->next=last;
    last->data=11;
    last->next=NULL;
    
    push(&last,8);
    push(&last,10);
    push(&last,13);
    push(&last,14);
    //pop(&last);        
    while(top)
    {
        cout<<top-> data<<endl;
        top = top-> next; 
    }    
}