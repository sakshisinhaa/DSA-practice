#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* head= NULL;
void insert(int n){
    Node* newNode = new Node();
    newNode->data = n;
    newNode->next=head;
    newNode-> prev = NULL;
    if(head!=NULL){
        head->prev = newNode;
    }
    head=newNode;
}
void deleteAtPos(int pos){
    if(head==NULL){
        cout<<"List is empty, nothing to delete!"<<endl;
        return;
    }
    Node* temp = head;
    if(pos==1){
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        delete temp;
        return;
    }
    for(int i=1; i<pos && temp!=NULL; i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Position out of range!";
        return;
    }
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    if(temp->prev!=NULL){
        temp->prev->next=temp->next;
    }
    delete temp;
}
void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
}
int main(){
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    deleteAtPos(3);
    print();
}