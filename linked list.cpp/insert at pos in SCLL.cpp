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
void insertAtPos(int n, int pos){
    Node* newNode = new Node();
    newNode->data = n;
    if(pos==1){
        Node* temp =head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
        head= newNode;
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count< pos-1 && temp->next!=head){
        temp=temp->next;
        count++;
    }
    if(temp->next == head && count<pos-1){
        cout<<"Invalid position!!"<<endl;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
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
    insertAtPos(2,9);
    insertAtPos(1,2);
    print();
    return 0;
}