#include<iostream>
using namespace std;
 class B;
class A{
    int a=102;
    int b=108;
    int c=a+b;
  friend void abhishek(A,B); 
};

class B{
    int x=102;
    int y=108;
    int z=x+y;
  friend void abhishek(A,B); 
};

void abhishek(A a, B b){
    cout<<"sum"<<a.c+b.z;
}

main(){
    A obj1; B obj2;
    abhishek(obj1,obj2);
}