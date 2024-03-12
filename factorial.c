#include<Stdio.h>
int factorial(int);
main()
{
    int n,f;
    printf("Enter a value of n\n");
    scanf("%d",&n);
    if(n>0)
    {
        f=factorial(n);
        printf("%d!=%d",n,f);
    }
    else
        printf("Invalid input\n");
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
