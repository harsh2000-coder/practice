#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next_node;
};
void append(node **first,int data)
{
  node *new_node = (node*)malloc(sizeof(node*));
  node *ref = *first;
  new_node -> data = data;
  new_node -> next_node = ref;
  *first = new_node;
}
void create(node *third,int data)
{
  node *new_node = (node*)malloc(sizeof(node*));
  new_node -> data = data;
  new_node -> next_node = NULL;
  third -> next_node = new_node;
  third = new_node;
}
int main()
{
    node *first  = (node*)malloc(sizeof(node*));
    node *second = (node*)malloc(sizeof(node*));
    node *third  = (node*)malloc(sizeof(node*));

    first -> data = 101;
    first -> next_node = second;

    second -> data = 102;
    second -> next_node = third;

    third -> data = 103;
    third -> next_node = NULL;
  
  append(&first,90);
  create(third,110);
  while(first)
     {
        cout<<first -> data<<endl;
       first = first -> next_node;
     }    
}