#include<stdio.h>
int main()
{
    int mat[20][20],m,n,i,j;
    printf("Enter Number of row:");
    scanf("%d",&m);
    printf("Enter Number of colunm:");
    scanf("%d",&n);


    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("Enter Array element for index mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        //printf("Enter Array element for index mat[%d][%d]:");
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
