#include<stdio.h>
void main()
{
    int n,i;
    printf("enter a no  : ");
    scanf("%d",&n);
    printf("\nreverse order  : ");

    for(i=n;i>0;i--)
    {
        printf("%d ",i);
    }
}

