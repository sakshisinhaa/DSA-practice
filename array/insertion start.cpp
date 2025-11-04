//static array
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,0};
    int n=4;
    cout<<"array before insertion"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0]=25;
    n++;
    cout<<"array after insertion"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}

//using vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,0};
    int n=4;
    cout<<"array at begining"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1;i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=25;
    cout<<"array after insertion"<<endl;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}