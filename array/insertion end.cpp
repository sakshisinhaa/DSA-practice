#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,0};
    int n=4;
    int element=35;
    cout<<"array before insertion"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[n]=element;
    cout<<"array after insertion"<<endl;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}