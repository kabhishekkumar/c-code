#include<iostream>
using namespace std;
int pow(int base , int exp){
    if(exp==1){
        return base;
    }
    else{
        return (base * pow(base,exp-1));
    }
}
int main(){
    int base,exp;
    cout<<"enter the base value = ";
    cin>>base;
    cout<<"enter the exp value = ";
    cin>>exp;
    int result = pow(base,exp);
    cout<<result;
}