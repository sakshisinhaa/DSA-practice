#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head =NULL;
void insert(int n){
    Node* newNode = new Node();
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void deleteAtPos(int pos){
    if(head==NULL){
        cout<<"List is empty!, Nothing to delete"<<endl;
        return;
    }
    Node* temp = head;
    if(pos==1){
        head= temp->next;
        delete temp;
        return;
    }
    for(int i=1; temp!=NULL && i<pos-1; i++){
        temp = temp->next;
    }
    if(temp==NULL || temp->next==NULL){
        cout<<"Position "<<pos<<" is not present in the list."<<endl;
        return;
    }
    Node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
}
void print(){
    Node* temp =head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
}
int main(){
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    deleteAtPos(2);
    print();
}