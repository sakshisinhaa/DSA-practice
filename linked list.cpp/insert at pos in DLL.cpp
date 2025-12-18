#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* head = NULL;
void insert(int n){
    Node* newNode = new Node();
    newNode->data = n;
    newNode->next = head;
    newNode->prev = NULL;
    if(head!=NULL){
        head->prev = newNode;
    }
    head = newNode;
}
void insertAtPos(int n, int pos){
    Node* newNode = new Node();
    newNode->data = n;
    if(pos==1){
        newNode->next=head;
        newNode->prev = NULL;
        if(head!=NULL){
            head->prev=newNode;
        }
        head=newNode;
        return;
    }
    Node* temp = head;
    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp = temp->next;
    }
    if(temp==NULL){
        cout<<"Position out of range!"<<endl;
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if(temp->next != NULL){
        temp->next->prev=newNode;
    }
    temp->next=newNode;
}
void print(){
    Node* temp= head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    cout<<"array before insertion"<<endl;
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    print();
    cout<<endl;
    cout<<"array after insertion:"<<endl;
    insertAtPos(4,2);
    print();
}