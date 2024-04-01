#include<iostream>
using namespace std;
int main()
{
    int i, a[100], n, p, v;
    cout<<"enter the n=";
    cin>>n;
    cout<<"enter the vlue =\n ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the position =";
  cin>>p;
  cout<<"enter the insert value =";
  cin>>v;

  for(i=(n-1); i>=(p-1); i--){
    a[i+1]=a[i];
  }
  a[p-1]=v;
  for(i=0; i<=n; i++){
    cout<<"\n" <<a[i];
  }
 
}