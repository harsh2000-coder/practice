#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data,i;
    node *next_node;
};

int main()
{
    node *first = (node*)malloc(sizeof (node*));
    node *second  = (node*)malloc(sizeof (node*));
    node *third = (node*)malloc(sizeof (node*));
    node *fourth = (node*)malloc(sizeof (node*));
    node *fivth= (node*)malloc(sizeof (node*));



    // first-> data = 101;
    cout<<"Enter first node value ";
    cin>>first->data;
    first-> next_node = second;

    // second-> data = 102;
    cout<<"Enter second node value ";
    cin>>second->data;
    second-> next_node = third;

    cout<<"Enter third node value ";
    cin>>third->data;
    third-> next_node = fourth ;

    cout<<"Enter forth node value ";
    cin>>fourth->data;
    fourth-> next_node = fivth;

    cout<<"Enter fifth node value ";
    cin>>fivth->data;
    fivth-> next_node = NULL;

    while(first)
    {
        cout<<first-> data<<endl ;
        first = first->next_node;
    }
}