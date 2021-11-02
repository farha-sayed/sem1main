#include <stdio.h>
#include <math.h>
int main()
{
float F, G, m1, m2, r;
G = 6.674* pow(10,-11);
printf("Please enter the mass of both objects one after the other");
scanf("%lf %lf", &m1, &m2);
printf("Please enter the distance between them");
scanf("%lf", &r);

//calculating
F = G*((m1*m2)/(pow(r,2)));

printf("The gravitational force between these two points is %e", F);




}
