#include<iostream>
using namespace std;
int stack[5], n=5, top=-1;
void push(int x){
    if(top==n-1){
        cout<<"Stack is full!"<<endl;
    }else{
        top++;
        stack[top]=x;
    }
}
int peek(){
    return stack[top];
}
void display(){
    if(top>=0){
        cout<<"Elements of the stack are: ";
        for(int i=top; i>=0; i--){
            cout<<stack[i]<<" ";
        }
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    int y= peek();
    cout<<"\nThe top element of the stack is: "<<y;
    
}