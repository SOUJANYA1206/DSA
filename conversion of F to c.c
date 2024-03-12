#include<stdio.h>
main()
{
    float F,C;
    printf("Enter the temperature in F degrees");
    scanf("%f",&F);
    C=(F-32)*0.556;
    printf("C=%f",C);
}
