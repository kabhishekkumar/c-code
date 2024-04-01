#include<iostream>
using namespace std;
int sum(int a){
    if(a<10){
        return a;
    }
    else{
        return (a%10+sum(a/10));
    }
}
int main(){
    int n;
    cout<<"enter the value of n= ";
    cin>>n;
    int a= sum(n);
    cout<<a;
   return 0;
}