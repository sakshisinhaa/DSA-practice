#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head= NULL;
void insert(int n){
    Node* newNode = new Node();
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void deleteLastNode(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
void print(){
    Node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    deleteLastNode();
    print();
}