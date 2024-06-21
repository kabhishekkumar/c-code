#include<iostream>
using namespace std;

int main(){

    int a[5]= {10,20,30,40,50};
    int  lr=0, up=4, mid, item, f=0;

    cout<<"enter the vlaue of item";
    cin>>item;

    while (lr<=up)
    {
       mid = (lr+up)/2;
       if(a[mid]== item){
        f =1; break;
       }
  

    if(a[mid]<item){
        lr= mid+1;
    }
    else{
        up= mid-1;
    }
      }

      if(f==1){
        printf("item found at %d", mid);

      }
      else{
        printf("item not found");
      }
    
}