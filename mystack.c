#include<stdio.h>
#define maxsize 10
int item,top=-1;
int stack[maxsize];


void push(){
        if (top==maxsize-1){
            printf("stack overflow");
        }
        else{
            printf("\n\n enter the the item to be inserted:");
            scanf("%d",&item);
            top=top+1;
            stack[top]=item;
        }
        printf("\n after the upgradtion:");
        for(int i=top;i>=0;i--){
            printf("\n|%d|",stack[i]);
        }
}

void pop(){
    int item;
if(top<0){
    printf("underflow");
}
else{
    item=stack[top];
    top=top-1;
}
        printf("\n after the upgradtion:");
        for(int i=top;i>=0;i--){
            printf("\n|%d|",stack[i]);
        }
}


void main(){
    char c;
    int opt;
    do
    {
        printf("1:push");
        printf("\n2:pop\n");
        printf("option:-");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            push(stack,top,item);
            break;
        case 2:
        pop(stack,top);
        break;
        default:
        printf("click the showed option");
            break;
        }
        printf("\n\n do you want to continue y|Y:");
        fflush(stdin);
        scanf("%c", &c);
    }while (c=='y'||c=='Y');
}
