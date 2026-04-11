#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* top=NULL;
//for adding
void push(int n){
    Node* newNode= new Node();
    newNode->data=n;
    newNode->next=top;
    top=newNode;
    cout<<"Element pushed was: "<<n<<endl;
}
//for deleting
void pop(){
    if(top==NULL){
        cout<<"Stack is empty!"<<endl;
        return;
    }
    Node* temp =top;
    cout<<"Element popped out was: "<<temp->data<<endl;
    top=top->next;
    delete temp;
}
//for viewing
int peek(){
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return top->data;
}
//for printing
void display(){
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"Stack elements are: ";
    Node* temp = top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    cout<<"\ntop element of the stack is: "<<peek()<<endl;
    pop();
    display();
}