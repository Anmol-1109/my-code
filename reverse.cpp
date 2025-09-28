#include<iostream>
#include <math.h>
#include <limits>
using namespace std;
int main(){
cout<<"enter the no ";
int n;
int no=0;
cin>>n;
int i=0;
/*if(n>=INTMAX_MAX/10||n<INTMAX_MIN){
    cout<<"enter a valid no";
    cout<<0;
    n=0;
}*/

  while(n!=0){
int digit =n%10;
no = no*10+ digit;
i++;
n=n/10;
if(no>=INT32_MAX/10||no<INT32_MIN/10){
    break;
}}
if(no>=INT32_MAX/10||no<INT32_MIN/10){
    cout<<0;}
else{
cout<<"no reversed is "<<no;}


//cout<<'\n'<<INT32_MAX;
}

