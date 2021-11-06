#include <stdio.h>
#include <math.h>

int main()
{
double p, y;
printf("Please enter amt in pounds");
scanf("%lf", &p);
y = 153.09*p;
printf("This amt in Japanese yen is \n %lf \n", y);
if(y>1000000)
{
  printf("Wow you are a millionaire in Japan!!");
}
return 0;

}
