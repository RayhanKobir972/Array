#include<stdio.h>
int main()
{
    int a[50],n,i,pos,x;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before insert:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nwhich position want to be deleted:\n");
    scanf("%d",&pos);

    for(i=pos-1 ;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("After Delete:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

