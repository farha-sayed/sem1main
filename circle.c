#include <stdio.h>
#include <math.h>

int main()
{
double d, r;
double area, perimeter;
printf("Please enter the diameter of a circle.");
scanf("%lf", &d);
r = d/2;
area = pow(r,2)*pi;
perimeter = 2*pi*r;
printf(" Area is &lf and Perimeter is %lf", &area &perimeter);

return 0;
}
