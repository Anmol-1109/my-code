#include<stdio.h>
int main(){
    printf("enter a odd number");
    int num;
    scanf("%d",& num);
    int k=num-1;
    for(int i = 1;i<=num;i=i+1){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }//printf("*");//
        for(int u =1;u<=i;u++){
            printf("*");
        }
         for(int l =1;l<=i;l++){
            printf("*");}
        printf("\n");
    
    
      
    
 
}}