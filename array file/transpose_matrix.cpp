#include<iostream>
using namespace std;
int main(){
    int i,j,a[3][3],b[3][3];
    cout<<"enter the value of matrix";
    for(i=0; i<3; i++){
        for(j=0; i<3; i++){
            cin>>a[i][j];
        }
    }
    
   for(i=0; i<3; i++){
        for(j=0; i<3; i++){
            cout<<a[i][j];
          
        }
    }
     b[i][j]=a[j][i];
cout<<"[";
 for(i=0; i<3; i++){
        for(j=0; i<3; i++){
            cout<<b[i][j];
        }
        cout<<"]";
        cout<<"\n";
    }

}