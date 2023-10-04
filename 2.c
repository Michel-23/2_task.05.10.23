#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1,r1,x2,y2,r2,a;
    printf("Enter coordinates and radii of circles");
    printf("\nx1=");
    scanf("%d", &x1);
    printf("y1=");
    scanf("%d", &y1);
    printf("r1=");
    scanf("%d", &r1);
    printf("x2=");
    scanf("%d", &x2);
    printf("y2=");
    scanf("%d", &y2);
    printf("r2=");
    scanf("%d", &r2);
    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    if (a>(r1+r2)) printf("circles do not intersect");
    if (a==(r1+r2)) printf("circles intersect at one point");
    if (a<(r1+r2)) 
    {
        if (a!=0)
        printf("circles intersect at two points");
    }
    if (a==0) printf("the circles coincide");
    return 0;
}