
#include<stdio.h>
int no_ones(int);
main()
{
    int n,no1;
    printf("Enter a number\n");
    scanf("%d",&n);
    no1=no_ones(n);
    printf("Number of ones=%d",no1);
}
int no_ones(int n)
{
    int no1,count=0;
    while(n)
    {
        no1=n%2;
        if(no1==1)
        {
            count++;
        }
        n=n/2;
    }
    return count;
}
