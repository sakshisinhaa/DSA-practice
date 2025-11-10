#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int countNodes(Node* head){
    Node* temp=head;
    int count=0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    head->data=10;
    second->data=20;
    third->data=30;
    
    head->next=second;
    second->next=third;
    third->next=NULL;
    
    cout<<countNodes(head);
}