#include<stdio.h>
#include<math.h>
main()
{
    float n1,n2,ans;
    char op;
    printf("Enter the values and opt\n");
    scanf("%f%f%*c%c",&n1,&n2,&op);
    switch(op)
    {
        case'+':ans=n1+n2;
                printf("n1+n2=%f",ans);
                break;
        case'-':ans=n1-n2;
                printf("n1-n2=%f",ans);
                break;
        case'*':ans=n1*n2;
                printf("n1*n2=",ans);
                break;
        case'/':if(n2==0)
                {
                    printf("Error\n");
                }
                else
                {
                    ans=n1/n2;
                    printf("n1/n2=%f",ans);
                }
                break;
        case'%':ans=(int)n1%(int)n2;
                printf("n1%n2=%f",ans);
                break;
    }
}
