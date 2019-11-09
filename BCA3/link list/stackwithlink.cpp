#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next_node;
};
void push(node **first,int data)
{
    node *new_node = (node*)malloc(sizeof(node*));
    node *ref = *first;
    new_node -> data = data;
    new_node -> next_node = ref;
    *first = new_node;
}

void pop(node **first)
{
    node *ref = *first;
    *first = ref->next_node;
    free(ref);
}

int main()
{
    node *first = (node*)malloc(sizeof(node*));

    first -> data = 101;
    first -> next_node = NULL;


    push(&first,9);
    push(&first,85);
    push(&first,96);
    push(&first,58);
    push(&first,44);            
    pop(&first);
    pop(&first);

    while(first)
        {
            cout<<first -> data<<endl;
            first = first -> next_node;
        }
}