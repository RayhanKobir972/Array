#include<stdio.h>
int main()
{
    int A[20][20],n,m,i,j,uppersum=0,lowersum=0;
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

     printf("A = ");
    for(i=0;i<m;i++)
    {
        //printf("Enter Array element for index mat[%d][%d]:");
        for(j=0;j<n;j++)
        {
            printf("\t%d\t",A[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                uppersum = uppersum + A[i][j];
            }
            if(i>j)
            {
                lowersum = lowersum + A[i][j];
            }
        }
    }
    printf("Upper Triangle Sum=%d\n",uppersum);
    printf("Lower Triangle Sum =%d",lowersum);
}
