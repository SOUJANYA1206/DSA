#include<stdio.h>
int reverse(int);
main()
{
    int n,rev;
    printf("Enter a number\n");
    scanf("%d",&n);
    rev=reverse(n);
    printf("\n%d",rev);
}
int reverse(int n)
{
    int rev=0,ld;
    while(n!=0)
    {
       ld=n%10;
       rev=rev*10+ld;
       n=n/10;
    }
    return rev;
}
