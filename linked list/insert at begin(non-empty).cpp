#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertAtBeginning(Node* &head, int value){
    Node* newNode= new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void traversal(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = new Node();
    Node* first = new Node();
    
    head->data=20;
    first->data=30;
    
    head->next = first;
    first->next = NULL;
    cout<<"Linked List before insertion ";
    traversal(head);
    insertAtBeginning(head,10);
    cout<<"Linked List after insertion: ";
    traversal(head);
}