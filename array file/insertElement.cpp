#include<iostream>
using namespace std;
int main(){
    int i,n,v,p;
    cout<<"enter the value of n";
    cin>>n;
    int a[n];
    cout<<"enter the array elements:";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    
    cout<<"enter the position for inserting element:";
    cin>>p;

    cout<<"enter the value:";
    cin>>v;

    for(i=(n-1); i<=(p-1); i--){
        a[i+1]= a[1];

    }
   a[p-1]= v;

   for(i=0; i<=n; i++){
    cout<<a[i]<<endl;
   }
}