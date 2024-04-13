#include<iostream>
using namespace std;
int main(){
    int i,n;
    int a[100];
    cout<<"enter the value of n:";
    cin>>n;

    for(i=0; i<n; i++){
        cin>>a[i];
    }
     cout<<"original array:";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    int arr[100];
    
    for(i=0; i<n; i++){
        arr[i]=a[n-1-i];
    }
    cout<<"copy array:";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 
}