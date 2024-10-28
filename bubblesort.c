//wap using array sort the elements in array in ascending order using selection sort in c
#include<stdio.h>
void main (){
    int i,e,j ,k;
    int temp;
    printf("enter the no.of elements:");
    scanf("%d",&e);
    int a[e];

    printf("enter the values of elements");
    for(i=0;i<e;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<e;i++)
    {
        for(j=i+1;j<e;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(k=0;k<e;k++){
        printf("%d,",a[k]);
    }
}