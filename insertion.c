#include<stdio.h>
void main(){
int a[40],pos,i,size,value;
printf("\nEnter no of elements in array of students:");
scanf("%d",&size);
printf("\nenter %d elements are:",size);
for(i=0;i<size;i++)
    scanf("%d",&a[i]);
printf("\nenter the position where you want to insert the element:");
scanf("%d",&pos);
printf("\nenter the value into that poition:");
scanf("%d",&value);
for(i=size-1;i>=pos-1;i--)
    a[i+1]=a[i];
a[pos-1]= value;
printf("\nfinal array after inserting the value is");
for(i=0;i<=size;i++)
    printf("%3d",a[i]);
}