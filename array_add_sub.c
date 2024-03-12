#include<stdio.h>
void read(int[100][100],int,int);
void display(int[100][100],int,int);
void add(int[100][100],int[100][100],int,int);
void diff(int[100][100],int[100][100],int,int);
main()
{
      int a[100][100],b[100][100],r,c;
      printf("Enter the no of rows and columns\n");
      scanf("%d%d",&r,&c);
      printf("Enter the elements of array 1\n");
      read(a,r,c);
      printf("Enter the elements of array 2\n");
      read(b,r,c);
      display(a,r,c);
      printf("\n");
      display(b,r,c);
      printf("\nDIFF\n");
      add(a,b,r,c);
      printf("\nDIFF\n");
      diff(a,b,r,c);
}
void read(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
         {
               scanf("%d",&a[i][j]);
         }
    }
}
void display(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
         {
               printf("%d\t",a[i][j]);
         }
         printf("\n");
    }
}
void add(int a[100][100],int b[100][100],int r,int c)
{
      int x=r,y=c;
      int i,j,res[100][100];
      for(i=0;i<r;i++)
      {
           for(j=0;j<c;j++)
           {
                res[i][j]=a[i][j]+b[i][j];
           }
      }
      display(res,x,y);
}
void diff(int a[100][100],int b[100][100],int r,int c)
{
      int x=r,y=c;
      int i,j,res[100][100];
      for(i=0;i<r;i++)
      {
           for(j=0;j<c;j++)
           {
                res[i][j]=a[i][j]-b[i][j];
           }
      }
      display(res,x,y);
}
