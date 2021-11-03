#include <stdio.h>
#include <math.h>

int main()
{
float x1, y1, x2, y2;
float d;

printf("Please enter the coordinates for first point(x1,y1)\n");
scanf("%lf %lf", &x1, &y1);
printf("Please enter the coordinates for first point(x1,y1)\n");
scanf("%lf %lf", &x2, &y2);

d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

}
