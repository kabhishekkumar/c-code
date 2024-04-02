#include<iostream>
using namespace std;
int fun(int a){
if(a==1){
    cout<<"abhishek"<<endl;
}
else{
    
    cout<<"abhishek"<<endl;
    fun(a-1);
    
}
return 0;
}

int main(){
    int n;
    cout<<"n= ";
    cin>>n;
    fun(n);
    return 0;
}