#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int key;
    cout<<"enter element here: "<<endl;
    cin>>key;
    int low=0, high=n-1;
    bool found = false;
    while(low<=high){
        int mid = (low+high) / 2;
        if(arr[mid] == key){
            cout<<"element found at index "<<mid<<endl;
            found = true;
            break;
        }else if(arr[mid]< key){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    if(!found){
        cout<<"element not found"<<endl;
    }
    return 0;
}