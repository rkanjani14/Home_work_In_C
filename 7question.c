#include<stdio.h>
void main()
{
    int n,n1,i=0,a[10],sum=0,t;
    printf("enter a no  : ");
    scanf("%d",&n);
    n1 = n;
    while(n)
    {
        t = n % 10;
        a[i] = t*t*t;
        sum = sum + a[i];
        n = n / 10 ;
        i = i + 1;

    }
    if(n1 == sum)
        printf("armstrong number");
    else
        printf("not armstrong number");




}
