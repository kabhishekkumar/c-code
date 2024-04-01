#include<iostream>
using namespace std;
int main(){
    int i,a[100],n,p;
    cout<<"enter the value of number= ";
    cin>>n;
    cout<<"enter the number of array";

    for(i=0; i<n; i++){
    cin>>a[i];
    }
    cout<<"enter the position";
    cin>>p;

    for(i=p; i<=(n-1); i++){
        a[i-1]=a[i];
    }
    for(i=0; i<=(n-1); i++){
        cout<<a[i];
        cout<<"\n";
    }
}