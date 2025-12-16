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
void insertAtEnd(int n){
    Node* newNode = new Node();
    newNode->data = n;
    newNode->next =NULL;
    newNode->prev = NULL;
    if(head == NULL){
        head = newNode;
    }else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev =temp;
    }
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
    insertAtEnd(6);
    print();
}