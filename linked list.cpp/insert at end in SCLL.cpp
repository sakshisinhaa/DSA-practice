#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
void insertAtBeginning(int n){
    Node* newNode = new Node();
    newNode->data = n;
    if(head==NULL){
        head=newNode;
        newNode->next=head;
    }
    else{
        Node* temp = head;
        while(temp->next != head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
        head=newNode;
    }
}
void insertAtEnd(int n){
    Node* newNode= new Node();
    newNode->data = n;
    if(head == NULL){
        head=newNode;
        newNode->next=head;
    }else{
        Node* temp = head;
        while(temp -> next != head){
            temp = temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
}
void print(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    Node* temp =head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
}
int main(){
    insertAtBeginning(5);
    insertAtBeginning(4);
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtEnd(1);
    print();
    
}