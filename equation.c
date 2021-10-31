// A C program to solve quadratic equations of the general form
//  ax2 + bx + c  = 0


// PLEASE READ THE FOLLOWING SECTION BUT DON'T CHANGE IT
// ******************************************************

#include <stdio.h>
#include <math.h>

int main ()
{
  double a, b, c;   // the constants (parameters) of the equation
  double x1 , x2;   // the two roots of the equation
  printf ("Enter the values of a, b, and c respectively, separated by white space then press Enter: "); // prompt the user to enter a, b and c
  scanf ("%lf%lf%lf", &a, &b, &c);  // read in a, b, and c

  // END OF 'DON'T CHANGE' SECTION

  // WRITE THE CODE TO COMPUTE x1 and x2 below

x1 =( -b + sqrt(b^2 - 4*a*c) )/ 2*a
x2 =( -b - sqrt(b^2 - 4*a*c) )/ 2*a


  // PLEASE READ THE FOLLOWING SECTION BUT DON'T CHANGE IT
  // ******************************************************
  printf ("The roots of the eqaution are x1= %lf, x2= %lf\n", x1, x2);

}

  // END OF 'DON'T CHANGE' SECTION
