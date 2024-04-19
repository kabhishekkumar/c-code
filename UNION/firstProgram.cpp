#include<iostream>
using namespace std;

union emp{
    int a;
    double b;
    char c;
    void show(){
        cout<<"enter the value of a";
        cin>>a;
        cout<<"enter the value b";
        cin>>b;
        cout<<"enter the character:";
        cin>>c;
        void display(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
        }
    }
};

int main(){
  union emp d;
 cout<<sizeof(emp)<<endl;

}

//union is user define data type 
