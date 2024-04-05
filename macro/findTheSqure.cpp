#include<iostream>
using namespace std;
#define PI 3.14
#define square(r) ((r)*(r))

int main(){
    int r;
    cout<<"enter the value of r:";
    cin>>r;

    double area = PI*square(r);
    cout<<"area of circle = "<<area;
}