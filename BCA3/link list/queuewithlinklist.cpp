#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next_node;
};
void create(node **first,int data)
{
    node *new_node = (node*)malloc(sizeof(node*));
    node *ref = *first;
    new_node -> data = data;
    new_node -> next_node = ref;
    *first = new_node;
}

void append(node **last,int data)
{
    node *new_node = (node*)malloc(sizeof(node*));
    node *ref = *last;
    new_node -> data = data;
    new_node -> next_node = NULL;
    ref->next_node = new_node;
    *last = new_node;
}


void remove(node **first)
{
    node *ref = *first;
    *first = ref->next_node;
    free(ref);
}

int main()
{
    node *first = (node*)malloc(sizeof(node*));
    node *last = (node*)malloc(sizeof(node*));

    first -> data = 101;
    first -> next_node = last;

    last->data = 102;
    last->next_node = NULL;
    // create(&first,9);
    // create(&first,85);
    // create(&first,96);
    // create(&first,58);
    create(&first,58);
    append(&last,44);

     remove(&first);
    // remove(&first);

    while(first)
        {
            cout<<first -> data<<endl;
            first = first -> next_node;
        }
}