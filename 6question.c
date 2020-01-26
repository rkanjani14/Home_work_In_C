#include<stdio.h>
void main()
{
    int b,p,sum;
    printf("enter base number : ");
    scanf("%d",&b);
    printf("\nenter power  : ");
    scanf("%d",&p);
    sum = b;
    while(p>1)
    {
        sum = sum * b;
        p -= 1;
    }

   printf("result is : %d",sum);


}
