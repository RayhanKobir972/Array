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
    printf("\nWhich element want to be inserted:\n");
    scanf("%d",&x);
    printf("which position want to be inserted:\n");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=x;
    n++;
    printf("After insert:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
