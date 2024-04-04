#include<iostream>
using namespace std;
int changeValue(int *p){
    *p = *p+10;
    cout<<*p<<endl;
}
int main(){
    int num; 
    cout<<"enter the value of num:";
    cin>>num;

    cout<<num<<endl;
    changeValue(&num);
    cout<<num;
}