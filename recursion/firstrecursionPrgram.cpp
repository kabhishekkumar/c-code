#include<iostream>
using namespace std;
int fun(int a){
if(a==1){
    cout<<"abhishek"<<endl;
}
else{
    fun(a-1);
    cout<<"abhishek";
    
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