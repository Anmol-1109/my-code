#include<stdio.h>
int main(){
    int n;
    int k;
    int l=0;
    int m;
    int uu=0;
    printf("enter your no");
    scanf("%d",&n);
    for(int i=10;i<=n*10;){
        k=n%i;
        m=k-l;
        l=k;
        uu=((m*10)/i)+uu;
        i=i*10;
       /*if(n%i==n){
            break;
        }*/

    }
    printf("%d",uu);
}