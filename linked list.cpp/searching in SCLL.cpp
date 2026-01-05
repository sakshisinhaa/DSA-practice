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
void search(int key){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
    }
    Node* temp = head;
    int pos = 1;
    do{
        if(temp->data == key){
            cout<<"Element "<<key<<" found at position "<<pos<<endl;
            return;
        }
        temp=temp->next;
        pos++;
    }while(temp->next!=head);
    cout<<"Element not found in the list!"<<endl;
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
    search(9);
    print();
}