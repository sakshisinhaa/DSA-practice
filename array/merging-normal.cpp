#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    int n1=3, n2=3;
    int merged[n1 + n2];
    for(int i=0; i<n1;i++){
        merged[i]=arr1[i];
    }
    for(int j=0; j<n2; j++){
        merged[n1+j]=arr2[j];
    }
    for(int k=0; k<n1+n2; k++){
        cout<<merged[k]<<" ";
    }
    return 0;
}