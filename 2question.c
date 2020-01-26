#include<stdio.h>
void main()
{
    int n,i;
    printf("enter a no up to odd no get print : ");
    scanf("%d",&n);
    printf("\nodd no are : ");
    for(i=1 ; i< 2*n ; i +=2)
    {
        printf("%d  ",i);
    }
}
