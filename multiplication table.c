#include<stdio.h>
void table(int);
main()
{
    int n;
    printf("Enter a value of n\n");
    scanf("%d",&n);
    table(n);
}
void table(int n)
{
    int m,i;
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("%d*%d=%d\n",n,i,m);
    }
}
