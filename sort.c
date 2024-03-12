#include<stdio.h>
void read(int[],int);
void display(int[],int);
void sort(int[],int);
main()
{
     int a[50],n;
     printf("Enter the size of an array\n");
     scanf("%d",&n);
     printf("Enter the elemnets of an array\n");
     read(a,n);
     display(a,n);
     printf("\nsorted array\n");
     sort(a,n);
     display(a,n);
}
void read(int a[50],int n)
{
   int i;
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
}
void display(int a[50],int n)
{
   int i;
   for(i=0;i<n;i++)
       printf("%d\t",a[i]);
}
void sort(int a[50],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
         for(j=0;j<n-1;j++)
         {
               if(a[j]>a[j+1])
               {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
               }
         }
    }
}
