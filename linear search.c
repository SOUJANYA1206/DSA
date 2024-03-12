
#include<stdio.h>
void read(float[],int);
void display(float[],int);
int lin_search(float[],int,float);
main()
{
    int n,count;
    float m[100],key;
    printf("Enter number of students\nenter a value of key\n");
    scanf("%d%f",&n,&key);
    read(m,n);
    display(m,n);
    count=lin_search(m,n,key);
    if(count>0)
        printf("Key is found\n");
    else
        printf("Key is not found\n");
}
void read(float m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&m[i]);
    }
}
void display(float m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%f\t",m[i]);
    }
}
int lin_search(float m[100],int n,float key)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(m[i]=key)
            c++;
    }
    return c;
}
