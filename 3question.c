#include<stdio.h>
void main()
{
    int en,od,i,s_even=0,s_odd=0;
    printf("enter a no up to even no's get print : ");
    scanf("%d",&en);
    printf("\neven no are : ");
    for(i=2 ; i<=2*en ; i += 2)
    {
        printf("%d  ",i);
        s_even = s_even + i;
    }

    printf("\nenter a no up to even no's get print : ");
    scanf("%d",&od);
    printf("\nodd no are : ");
    for(i=1 ; i<= 2*od ; i +=2)
    {
        printf("%d  ",i);
        s_odd = s_odd + i;
    }

    printf("\nsum of all even no is : %d",s_even);
    printf("\nsum of all odd no is : %d",s_odd);
}

