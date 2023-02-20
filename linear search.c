#include<stdio.h>
int main()
{
    int n,i,num[40],value,index=-1;
    printf("Enter N = ");
    scanf("%d",&n);
    printf("Enter array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The array elements are:");
    for(i=0;i<n;i++)
    {
       printf("%d ",num[i]);
    }
    printf("\nWhich value want to be search :");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(value == num[i])
        {
            index=i;
            break;
        }
    }
    if(index == -1)
        printf("Value not found");
    else
        printf("The index of %d is = %d & position = %d",value,index,index+1);
}
