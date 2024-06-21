#include<iostream>
using namespace std;

class A{
    int a,b;

    public:

    A(int x, int y){
        a= x; b=y;

    }

    void show(){
        cout<<a<<" "<<b<<endl;
    }
    void operator -(){
        a= -a;
        b= -b;

    }
};

    void main(){
        A ob(-10, -20);
        ob.show();
        -ob;
        ob.show();
    }