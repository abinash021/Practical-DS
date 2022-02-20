#include<stdio.h>
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("arr [%d][%d] :",i ,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
 return 0;   
}