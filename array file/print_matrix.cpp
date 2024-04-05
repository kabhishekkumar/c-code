#include<iostream>
using namespace std;
int main(){
    int i,a[2][2],j;
cout<<"enter the matrix";
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            cin>>a[i][j];
        }
    }
     for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            cout<< a[i][j];
        }
        cout<<endl;
    }
return 0;
}