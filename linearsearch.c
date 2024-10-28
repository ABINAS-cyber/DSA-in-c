#include<stdio.h>
void main(){
    int x,element,i,f=-1;

    printf("enter no.of elements");
    scanf("%d",&x);
    int arr[x];
    printf("\n enter the value of elements");
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n enter the value you want to search ");
    scanf("%d",&element);

    for(i=0;i<x;i++){
        if(element==arr[i]){
            f=i+1;
        }
    }
    if(f==-1){
        printf("\n item not found");
    }
    else{
        printf("ITEM FOUND AT POISTION %d",f);
    }
}