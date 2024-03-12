#include<stdio.h>
int young(int,int,int);
main()
{
     int a1,a2,a3,res;
     printf("ENter the age of RAM,SHYAM & AJAY\n");
     scanf("%d%d%d",&a1,&a2,&a3);
     res=young(a1,a2,a3);
     if(res==a1)
         printf("Ram\n");
     else if(res==a2)
         printf("Shyam\n");
     else
         printf("Ajay\n");
}
int young(int a1,int a2,int a3)
{
      int  r;
      if(a1<a2&&a1<a3)
           r=a1;
      else if(a2<a1&&a2<a3)
           r=a2;
      else
           r=a3;
      return r;
}
