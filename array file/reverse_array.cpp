#include<iostream>
using namespace std;
int main(){
    int i,a[100],n;
    cout<<"enter the value of n";
    cin>>n;

cout<<"enter the value of array";
    for(i=0; i<n; i++){
cin>>a[i];
    }

    for(i=(n-1); i>=0; i--){
        cout<<a[i];
        cout<<"\n";
 }
    // for(i=0; i<n; i++){
    //     cout<<a[i];
    //     cout<<"\n";
    // }
}