#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the value of n:";
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; i<=n; j++){
            if(j==1 && j<=n){
                cout<<"*";
            }
           
        }
       if(i==5 && j<=n ){
        cout<<"*";
       }
       cout<<endl;
    }
   
}