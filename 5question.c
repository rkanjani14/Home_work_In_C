#include<stdio.h>
void main()
{
    int n,i,last_digit,first_digit;
    printf("enter a no up to odd no get print : ");
    scanf("%d",&n);
    last_digit = n%10;
    while(n)
    {
        first_digit = n;
        n = n/10;
    }
    printf("sum of first and last digit of number : %d",first_digit+last_digit);
}

