#include<stdio.h>
void sort(int array[],int size){
    int temp;
    for(int k=0;k<size;k++){
        for(int i=0;i<size;i++){
        if(array[i]>array[i+1]){
            temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;}}
      //else{ break;}// 
      }

}
int main(){
    int array[]={1,8,5,6,7,3,4,5,6,2};
    int size=sizeof(array)/sizeof(array[1]);
    sort(array,size);
    for(int j=0;j<size;j++){
        printf("%d",array[j]);

    }
}