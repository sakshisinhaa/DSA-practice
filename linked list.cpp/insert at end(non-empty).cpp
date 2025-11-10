#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertAtEnd(Node* &head, int value){
    Node* newNode= new Node();
    newNode->data=value;
    newNode->next=NULL;
    
    if(head==NULL){
        head=newNode;
        return;
    }
    
    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void traversal(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head=new Node();
    head->data=10;
    
    Node* second=new Node();
    second->data=20;
    
    Node* third=new Node();
    third->data=30;
    head->next=second;
    second->next=third;
    third->next=NULL;
    cout<<"Linked List before insertion:";
    traversal(head);
    cout<<endl;
    insertAtEnd(head, 40);
    cout<<"Linked List after insertion:";
    traversal(head);
}