#include <stdio.h>
#include <math.h>

int main()
{
float x,y;
y = 0;
printf(" x \t y \n");
for(x = 0; x<=3.0; x=x+0.2)
{
y = pow(x,2) + 1;
printf("%lf \t %lf \n", x, y);

}
}
