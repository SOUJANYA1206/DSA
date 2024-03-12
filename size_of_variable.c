#include<stdio.h>
main()
{
   int p;
   float q;
   double r;
   int x;
   x=sizeof(p);
   printf("SIZE of p : %d bytes\n",x);
   x=sizeof(q);
   printf("SIZE of q : %d bytes\n",x);
   x=sizeof(r);
   printf("SIZE of r : %d bytes\n",x);
}
