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
void insertAtPos(int n, int pos){
    if(pos==1){
        insertAtBeginning(n);
        return;
    }
    Node* newNode= new Node();
    newNode->data= n;
    Node* temp = head;
    int count=1;
    while(count<pos-1 && temp->next!=head){
        temp=temp->next;
        count++;
    }
    if(temp->next == head && count<pos-1){
        cout<<"Invalid Position"<<endl;
        return;
    }
    Node* nextNode= temp->next;
    newNode->next=nextNode;
    newNode->prev=temp;
    nextNode->prev=newNode;
    temp->next=newNode;
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
    insertAtPos(10,4);
    print();
}