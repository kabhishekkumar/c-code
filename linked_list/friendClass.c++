#include<iostream>
using namespace std;
class A{
    int a=100, b=200;
    public:
    void show(){
        cout<<"value of a and b:"<<a<<" "<<b<<endl;
    }
    friend class B;
};

class B{
public:
void fr(A r){
    cout<<"sum of a and b:"<<r.a+r.b;
}
};

main(){
    A obj; B obj1;
    obj.show();

    obj1.fr(obj);
}