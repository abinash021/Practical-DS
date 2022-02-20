//Implementation of insertion & deletion in Queue   

#include <stdio.h>
#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;

void insert()
{
    int add_item;
    if (rear == MAX - 1)
    {
        printf("Queue Overflow \n");
    }
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

void display()
{
    int i;
    if (front == - 1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue_array[i]);
        }
        printf("\n");
    }
}
int main()  
{
    int i;
    while(1)
    {
        printf("If you want to enter the element in queue press 1 else 0: ");
        scanf("%d",&i);
        if(i==1)
        {
            insert();
        }
        else
        {
            break;
        }
    }

    display();
    return 0;
}