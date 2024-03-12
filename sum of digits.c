#include<stdio.h>
int sum_digit(int);
main()
{
    int n,sum;
    printf("Enter a value of n\n");
    scanf("%d",&n);
    sum=sum_digit(n);
    printf("Sum of digits=%d\n",sum);
}
int sum_digit(int n)
{
    int ld,s=0;
    while(n!=0)
    {
        ld=n%10;
        s=s+ld;
        n=n/10;
    }
    return s;
}
