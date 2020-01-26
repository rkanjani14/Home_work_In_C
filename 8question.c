#include<stdio.h>
void main()
{
    int n,i,t,digit_sum=0,square_sum=0;
    printf("enter a no  : ");
    scanf("%d",&n);

    while(n)
    {
        t = n % 10 ;
        digit_sum = digit_sum + t;
        square_sum = square_sum + (t*t) ;
        n = n / 10 ;
    }

    printf("difference of square and digit sum : %d ",square_sum-digit_sum);
}
