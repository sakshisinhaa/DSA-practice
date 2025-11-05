#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int key;
    cout<<"Please enter the element to be searched: "<<endl;
    cin>>key;
    bool found = false;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<"element found at index "<<i<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"element not found"<<endl;
    }
    return 0;
}