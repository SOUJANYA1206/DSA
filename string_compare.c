#include<stdio.h>
main()
{
    char s1[100],s2[100];
    int x;
    printf("Enter string 1\n");
    gets(s1);
    printf("Enter string 2\n");
    gets(s2);
    x=strcmp(s1,s2);
    if(x==0)
       printf("s1 and s2 are same\n");
    else
       printf("s1 and s2 are not same\n");
}
