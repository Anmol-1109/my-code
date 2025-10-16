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
    cout <<fact(6);
}