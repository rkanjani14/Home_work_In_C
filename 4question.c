#include<stdio.h>
void main()
{
    int n,i,sum=0,temp;
    printf("enter a no : ");
    scanf("%d",&n);

    while(n)
    {
        temp = n % 10;
        sum = sum + temp;
        n = n/10;
    }

    printf("sum of digit of number : %d",sum);
}

