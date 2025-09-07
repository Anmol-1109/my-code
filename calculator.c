#include<stdio.h>
int main(){
    int op = 0;
    float num1 =0;
    float num2 = 0;
    float ans = 0 ;
    printf("enter the first no ");
    scanf("%f",&num1);
    printf("enter the second ");
    scanf("%f",&num2);
    printf("what operations do you want to do\n");
    printf("1. for addition\n");
    printf("2. for substraction\n");
    printf("3. for division\n");
    printf("4. for multiplication\n");
    scanf("%d",&op);
    if(op==1){
        ans = num1 +num2;
        printf("%f",ans);
    }
     else if(op==2){
        ans = num1 -num2 ;
        printf("%f",ans);
    }
    else if(op==3){
        ans=num1/num2;
        printf("%f",ans);
    }
    else if(op==4){
        ans = num1*num2;
        printf("%f",ans);
    } 
    else {
        printf("invalid choice");
    }   

    }


