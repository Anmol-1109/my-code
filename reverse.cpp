#include<iostream>
#include <math.h>
using namespace std;
int main(){
cout<<"enter the no ";
int n;
int no=0;
cin>>n;
int i=0;
while(n!=0){
int digit =n%10;
//no= digit*(pow(10,i))+no;
no = no*10+ digit;

i++;
n=n/10;
}
cout<<"\nno reversed is "<<no;


}

