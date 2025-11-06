//for finding maximum value in the array
#include<iostream>
using namespace std;
int maxElement(int arr[],int n){
    int max_val=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max_val){
            max_val=arr[i];
        }
    }
    return max_val;
}
int main(){
    int arr[]={2,5,8,6,1,7};
    int n=6;
    cout<<maxElement(arr,6);
    return 0;
}