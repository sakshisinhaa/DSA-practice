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
void deleteAtBeginning(){
    if(head==NULL){
        cout<<"List is empty, Nothing to delete!"<<endl;
        return;
    }
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    Node* temp = head;
    Node* last = head;
    while(last->next!=head){
        last=last->next;
    }
    head=head->next;
    last->next=head;
    delete temp;
}
void deleteAtPos(int pos){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(pos==1){
        deleteAtBeginning();
        return;
    }
    Node* temp = head;
    Node* prev = NULL;
    int count =1;
    while(count< pos && temp->next!= head){
        prev = temp;
        temp=temp->next;
        count++;
    }
    if(count < pos && temp->next == head){
        cout<<"Invalid position!"<<endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
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
    insertAtBeginning(1);
    deleteAtPos(9);
    print();
}