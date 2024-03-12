#include<stdio.h>
struct emp
{
    char n[10];
    char id[10];
    float bp;
    float a;
    float d;
};
void read(struct emp[],int);
void display(struct emp[],int);
main()
{
     struct emp e[100];
     int n;
     printf("Enter the number of employees\n");
     scanf("%d",&n);
     read(e,n);
     display(e,n);
}
void read(struct emp e[100],int n)
{
     int i;
     for(i=0;i<n;i++)
     {
          printf("Enter the name\nid\nbasic pay\nallowance\ndeduction\n");
          scanf("%s%s%f%f%f",e[i].n,e[i].id,&e[i].bp,&e[i].a,&e[i].d);
     }
}
void display(struct emp e[100],int n)
{
     int i;
     float np;
     for(i=0;i<n;i++)
     {
          printf("name:%s\nid:%s\nbasic pay:%f\nallowance:%f\ndeduction:%f\n\n",e[i].n,e[i].id,e[i].bp,e[i].a,e[i].d);
          np=e[i].bp+e[i].a-e[i].d;
          printf("Net pay: %f\n\n\n\n",np);
     }
}
