#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the value of n = ";
    cin>>n;

    for(i=1; i<=n; i++){
      for(j=1; j<=n; j++){
        if(i==1 && j<n || j==1 && i<n){
            cout<<"*";
        }
        else{
          cout<<" ";
        }
       
        if(i==n && j<=n || j==n && i<=n ){
          cout<<"*";
        }
             else{  
                cout<<" ";
             }
              
         }
         cout<<endl;  
      }
     
    }
    
