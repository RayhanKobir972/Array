#include<stdio.h>
#define row 20
#define col 20
int main()
{
    int A[row][col],m,n,i,j;
    printf("Enter Number of row:");
    scanf("%d",&m);
    printf("Enter Number of colunm:");
    scanf("%d",&n);


    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("Enter Array element for index A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("A=");
    diagonalSum(A,m,n);
}
diagonalSum(int A[][col],int m,int n)
{
     int i,j,sum=0;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" \t%d\t",A[i][j]);
        }
        printf("\n");
    }
    //sum of diagonal

        for(j=0,i=0;j<n;i++,j++)
        {
            sum=sum+A[i][j];
        }

    printf("SUM=%d\n",sum);

    sum=0;
    for(j=n-1,i=0; j>=0; i++,j--)
        {
            sum=sum+A[i][j];

        }
     printf("SUM=%d",sum);
}
