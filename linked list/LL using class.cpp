#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    //creating cunstructor
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    //initializing nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    //connecting nodes
    first->next=second;
    second->next=third;
    third->next=NULL;
    
    Node* head = first;
    
    //Traversing the list
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}