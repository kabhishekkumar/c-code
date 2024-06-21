#include<iostream>
using namespace std;

class A{
    public:
   virtual void fun(){
    cout<<"abhishek kumar";
    }

};

class B{
    public:
 void fun()
{
    cout<<"rohit kumar";
}
};
 
 main(){
   
A *ptr; B obj;
ptr = &obj;
ptr -> fun();

 }