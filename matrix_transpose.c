#include<stdio.h>
int main()
{
    int A[20][20],row,column,i,j,transpose[20][20];
    printf("Enter Number of row:");
    scanf("%d",&row);
    printf("Enter Number of colunm:");
    scanf("%d",&column);


    for(i=0;i<row;i++)
    {

        for(j=0;j<column;j++)
        {
            printf("Enter Array element for index A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("A=");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf(" \t%d\t",A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            transpose[j][i]=A[i][j];
        }
        printf("\n");
    }
     printf("Transpose Matrix=\n");
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("\t%d\t",transpose[i][j]);
        }
        printf("\n");
    }
}

