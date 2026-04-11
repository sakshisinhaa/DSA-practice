#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* head = NULL;
void insertAtBeginning(int n){
    Node* newNode= new Node();
    newNode->data = n;
    newNode->next= NULL;
    newNode->prev= NULL;
    if(head==NULL){
        head = newNode;
        newNode->prev = head;
        newNode->next= head;
        return;
    }else{
        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next=newNode;
        head->prev = newNode;
        head= newNode;
    }
}
void deleteAtBeginning(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    if(head->next==head){
        delete head;
        head=NULL;
    }else{
        Node* temp =head;
        Node* last = head->prev;
        head=head->next;
        last->next=head;
        head->prev=last;
        delete temp;
    }
}
void print(){
    if(head == NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    Node* temp = head;
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
    insertAtBeginning(1);
    deleteAtBeginning();
    print();
}