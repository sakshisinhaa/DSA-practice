//when list is empty!
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertAtBeginning(Node* &head,int value){
    Node* newNode = new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void traversal(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head = NULL;
    insertAtBeginning(head,30);
    insertAtBeginning(head,20);
    insertAtBeginning(head,10);
    cout<<"Linked List: ";
    traversal(head);
}