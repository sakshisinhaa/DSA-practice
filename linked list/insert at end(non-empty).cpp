#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertAtEnd(Node* &head, int value){
    Node* newNode= new Node();
    newNode->data=value;
    newNode->next=NULL;
    
    if(head==NULL){
        head=newNode;
        return;
    }
    
    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void traversal(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head=new Node();
    head->data=10;
    
    Node* second=new Node();
    second->data=20;
    
    Node* third=new Node();
    third->data=30;
    head->next=second;
    second->next=third;
    third->next=NULL;
    cout<<"Linked List before insertion:";
    traversal(head);
    cout<<endl;
    insertAtEnd(head, 40);
    cout<<"Linked List after insertion:";
    traversal(head);
}

// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
// };
// Node* head= NULL;
// void insert(int n){
//     Node* newNode = new Node();
//     newNode->data=n;
//     newNode->next=head;
//     head=newNode;
// }
// void insertAtEnd(int n){
//     Node* newNode = new Node();
//     newNode->data = n;
//     newNode->next = NULL;
//     if(head==NULL){
//         head=newNode;
//     }
//     Node* temp=head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// void print(){
//     Node* temp =head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//     insert(3);
//     insert(2);
//     insert(1);
//     insertAtEnd(9);
//     print();
// }