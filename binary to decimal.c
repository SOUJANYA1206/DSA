#include<stdio.h>
#include<math.h>
int decimal(int);
main()
{
    int b,d;
    printf("Enter a binary number\n");
    scanf("%d",&b);
    d=decimal(b);
    printf("%d",d);
}
int decimal(int b)
{
    int sum=0,i=1,ld;
    while(b!=0)
    {
        ld=b%10;
        sum=sum+(ld*i);
        i=i*2;
        b=b/10;
    }
    return sum;
}
