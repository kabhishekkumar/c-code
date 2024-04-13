#include<iostream> 
using namespace std;
class A{
    int a,b;
    public:
    void show(){
       a=10; b=30;

       cout<<a<<" "<<b<<endl;
    }

    friend class B;

};

class B{
    public:

    void disp(A ref){
        ref.a; ref.b;
        cout<<ref.a<< " "<<ref.b;

    }
};

int main(){

    A ob1;
    B ob2;
ob1.show();
    ob2.disp(ob1);
    return 0;

} 