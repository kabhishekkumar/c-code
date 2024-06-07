#include<iostream>
#include<string.h>
using namespace std;
int main(){
   char a[500];
   cout<<"enter the string ";
   gets(a);
   puts(a);
   char b[20];
   cout<<"enter the string ";
   gets(b);
   puts(b);

cout<<strcpy(a,b)<<endl;
cout<<strcat(b,a)<<endl;
  // cout<< strlen(a)<<endl;
  // cout<<strrev(a)<<endl;
  //   cout<<strupr(a)<<endl;
  //   cout<<strlwr(a)<<endl;
  

}