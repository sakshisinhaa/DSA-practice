#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,20,30,40,50};
    int n=5;
    int pos;
    cout<<"array before deletion"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter position to delete (from 0 to "<<n-1<<": "<<endl;
    cin>>pos;
    if(pos<0 || pos>=n){
        cout<<"invalid position"<<endl;
    }else{
        for(int i=pos; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        n--;
        cout<<"array after deletion"<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
