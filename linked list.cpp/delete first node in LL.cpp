#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
void insert(int n){
    Node* newNode = new Node();
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void deleteFirstNode(){
    Node* temp = head;
    head = head-> next;
    delete temp;
}
void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    insert(3);
    insert(2);
    insert(1);
    deleteFirstNode();
    print();
}