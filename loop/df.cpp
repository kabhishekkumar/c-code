#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    int mid = (n/2)+1;
cout<<"enter the value of number = ";
cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
     if(i==mid && j==mid){
        cout<<"*";
     }
     cout<<" ";
        }
        cout<<endl;
        }
}