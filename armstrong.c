#include<stdio.h>
int arm(int);
main()
{
    int n,sum;
    printf("Enter a value of n\n");
    scanf("%d",&n);
    sum=arm(n);
    if(sum==n)
        printf("Armstrong\n");
    else
        printf("Not a armstrong\n");
}
int arm(int n)
{
    int sum=0,ld;
    while(n!=0)
    {
        ld=n%10;
        sum=sum+ld*ld*ld;
        n=n/10;
    }
    return sum;
}
