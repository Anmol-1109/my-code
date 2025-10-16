#include<iostream>
using namespace std;
int fact(int n){
    int j=1,k=1;
    while( j<= n){
        k=j*k;
        j++;

    }
    return k;
}
int ncr(int n,int r){
    int t= fact(n)/(fact(r)*fact(n-r));
    return t; 
}
int main(){
    int n;
    int r;
    cout <<"enter no of objects ";
    cin>>n;
    cout<<"enter no of selections";
    cin>>r;
    cout<<"the no of ways to select "<<r<<" objects from "<<n<<" objects is "<<ncr(n,r);

}