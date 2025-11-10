#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertAtPosition(Node* &head, int value, int pos){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    
    if(pos==1){
        newNode->next=head;
        head=newNode;
        return;
    }
    
    Node* temp=head;
    for(int i=1; i<pos-1 && temp!=head; i++){
        temp=temp->next;
    }
    
    if(temp==NULL){
        cout<<"Position out of range"<<endl;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void traversal(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head=new Node{10,NULL};
    head->next=new Node{20,NULL};
    head->next->next=new Node{30,NULL};
    head->next->next->next= new Node{40,NULL};
    cout<<"Linked List before insertion: ";
    traversal(head);
    cout<<endl;
    insertAtPosition(head, 25,3);
    cout<<"Linked List after insertion: ";
    traversal(head);
}