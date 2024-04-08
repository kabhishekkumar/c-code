#include<iostream>
using namespace std;
int main(){
    int multi(int,int );
    int s,x,y;
    cout<<"enter the value of x & y";
    cin>>x>>y;
    s = multi(x,y);
    cout<<s;
}
int multi(int a, int b){
 int c;
 c = a*b;
 return (c);
}