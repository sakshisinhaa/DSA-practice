//code can be used for insertion at beginning
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head=NULL;
void insert(int n){
    Node* newNode = new Node();
    newNode -> data = n;
    newNode -> next = head;
    head=newNode;
}
void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    insert(2);
    insert(3);
    insert(6);
    insert(5);
    insert(9);
    print();
}