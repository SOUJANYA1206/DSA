#include<stdio.h>
struct point
{
  double x;
  double y;
};
main()
{
    struct point p1,p2;
    double d;
    printf("Enter the point 1\n");
    scanf("%lf%lf",&p1.x,&p1.y);
    printf("Enter the point 2\n");
    scanf("%lf%lf",&p2.x,&p2.y);
    d=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
    printf("Distance=%lf\n",d);
}
