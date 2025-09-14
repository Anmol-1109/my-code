#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
   int no1 = (rand() %100) +1;
   int guess;
   int entry;
   //printf("%d",no1);//

   printf("enter the no of guesses you want ");
   scanf("%d",&guess);
   for(int i =1;i<=guess;i++){
    printf("\nenter a no from 1 to 100 ");
    scanf("%d",&entry);
    if(i==guess && entry ==no1 ){
        printf("you win on last try");
    }
    else if (i==guess){
        printf("you lose");
    }
    else if(entry<1||entry>100){
        printf("enter a valid no: ");
    }
    else if (entry> no1){
        printf("enter a lower no ");
    }
    else if (entry<no1){
        printf("enter a higher no ");}
    else if (entry==no1){
        printf("you win");
        break;
    }
    else{
        printf("invalid input");
    }
    }
   }
