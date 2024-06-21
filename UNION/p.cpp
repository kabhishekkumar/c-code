#include<iostream>
using namespace std;

void showinfo(int age){
cout<<age<<endl;
}

void showinfo(char name){
    cout<<name<<endl;
}

void showinfo(double salary){
    cout<<salary<<endl;
}


main(){
    showinfo(50);
     showinfo('#');
      showinfo(21648.2);

}
