#include<stdio.h>
#include<math.h>
main()
{
    float x,y,x1,y1,r,d;
    printf("Enter the values of \nx\ny\nx1\ny1\nr\n");
    scanf("%f%f%f%f%f",&x,&y,&x1,&y1,&r);
    d=sqrt(pow((x1-x),2)+pow((y1-y),2));
    if(d>r)
    {
        printf("The point lies outside the circle\n");
    }
    else if(d<r)
    {
        printf("The point lies inside the circle\n");
    }
    else
    {
        printf("the point lies on the cirle\n");
    }
}
