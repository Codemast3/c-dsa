#include<iostream>
using namespace std;
struct node {
    int data;// for the data
    struct node* next;//pointer for node 
};
// program to create a simple linked list 
//with three nodes 
int main(){
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    // allocating 3 in heap 
    head = new node;
    second = new node;
    third = new node;
    // three blocks have been allocated dynamically
    //we have already pointed pointers to these nodes
}