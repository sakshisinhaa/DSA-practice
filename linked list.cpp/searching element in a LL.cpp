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
int search( int key){
    Node*temp =head;
    int pos=1;
    while(temp!=NULL){
        if(temp->data==key){
            return pos;
        }
        temp=temp->next;
        pos++;
    }
    return -1;
}

int main(){
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    int pos = search(4);
    if(pos == -1){
        cout<<"element not found!"<<endl;
    }else{
        cout<<"Element found at position: "<<pos<<endl;
    }
}