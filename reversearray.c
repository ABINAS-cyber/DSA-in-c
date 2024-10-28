#include<stdio.h>
void main(){
    int  x,y=-1;

    printf("enter the no.of element:");
    scanf("%d",&x);
    int arr[x];


    printf("enter the value of the elements:");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }

    for(int o=x-1;o>y;o--){
        printf("%d,",arr[o]);
    }  

}