#include <iostream>
using namespace std;
int main(){
int a=0;
int b =1;
int c;
int n;
cout<<"enter the range";
cin>>n;


    for(int i=1;i<=n;i++){
        c= a+b;
        cout<<'\n'<<c;
        a=b;
        b=c; }
}