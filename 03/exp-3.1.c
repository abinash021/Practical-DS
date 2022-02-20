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
    printf("\nthe stack after deletion\n ");
    if(top==maxstk)
    {
        printf("\n Stack OVERFLOW ");
    }else{
  
    top--;
    for(int i=top;top>=0;top--)
    {
        printf("\n top-%d= %d ",top, stack[top]);
    }
    
    }
}