#include<stdio.h>
int main()
{
    int a1[5]={3, 4, 8, 12, 15},a2[5],i;
    printf("Array 1:");
    for(i=0;i<5;i++)
        printf("%d ",a1[i]);

    for(i=0;i<5;i++)
    {
        a2[i]=a1[i];
    }
    printf("\nArray 2:");
    for(i=0;i<5;i++)

        printf("%d ",a2[i]);

        getch();

}
