#include<iostream>
using namespace std;

union abhi
{
  int a;
  float b;
  double c;
};

 main(){
    union abhi E;
   E.a = 153;
    E.b= 56.1;
    
    cout<<E.a<<E.b;
}