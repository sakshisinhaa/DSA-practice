#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    //creating 3 new Node
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    //entering data
    head->data = 10;
    second->data = 20;
    third->data =30;
    
    //linking the nodes
    head->next=second;
    second->next=third;
    third->next=NULL;
    
    //traversing the linked list
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}