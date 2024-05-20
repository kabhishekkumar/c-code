#include<iostream>
using namespace std;

class A{
  public:

 virtual void fun(){
    cout<<"abhishek"<<endl;
  }
};

class B : public A{
  public:

  void fun(){
    cout<<"govinda "<<endl;
  }
};

int main(){
  A *ptr; B obj;

 ptr=&obj;
 ptr->fun();
}