#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};

void DEL(node **nd)
{
    node *ref = *nd;
    if(ref -> prev == NULL)
        { 
            ref -> next -> prev = NULL;
            *nd = ref->next;
            free(ref);
        }  
    else if(ref -> next == NULL)
        {
            ref -> prev  -> next = NULL;
            *nd = ref->prev;
            free(ref);
        }
    else
        {
            ref -> prev -> next = ref -> next;
            ref -> next -> prev = ref -> prev;
            *nd = ref->next;
            free(ref);
        }    
}
int main()
{
    node *first,*mid,*last,*fourth;
    first = (node*)malloc(sizeof(node*));
    mid   = (node*)malloc(sizeof(node*));
    last  = (node*)malloc(sizeof(node*));
    fourth = (node*)malloc(sizeof(node*));


    first -> data = 100;
    first -> prev = NULL;
    first -> next = mid;

    mid -> data = 101;
    mid -> prev = first;
    mid -> next = last;

    last -> data = 102;
    last -> prev = mid;
    last -> next = fourth;
    
    fourth -> data = 103;
    fourth -> prev = last;
    fourth -> next = NULL;
    
    DEL(&last);
    // cout<<first->data;
    while(first)
        {
            cout<<first -> data<<endl;
            first = first -> next;
        }
  }

