#include<stdio.h>
main()
{
    int a,b;
    printf("Enter the 2 numbers to be swapped\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d   b=%d",a,b);
}
