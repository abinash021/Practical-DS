#include<stdio.h>
void main()
{
    int top=6,maxstk=10;
    int j=top;
    int stack[20]= {5,6,8,2,7,9,3};
    printf("the stack is ");
    for(int i=j;j>=0;j--){
        printf("\nTop-%d-%d  ",j,stack[j]);
    }
    int item;
    printf("enter the maximum size of the stack is : %d \n",maxstk);
    if(top==maxstk)
    {
        printf("\n Stack OVERFLOW \n");
    }else{
    printf("\nenter the element you want to insert");
    scanf("%d",& item);
    top++;
    stack[top]=item ;
    for(int i=top;top>=0;top--)
    {
        printf("\n top-%d= %d ",top, stack[top]);
    }
    
    }
}