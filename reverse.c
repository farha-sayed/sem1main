#include <stdio.h>
int main()
{
int a[10];
int n;
printf ("How many numbers are there in the sequence?");
scanf("%i", &n);
// read the sequence
printf ("Enter the sequence:");
for (int i = 0; i < n ; i++)
scanf ("%i" , &a[i]);
// print the sequence backwards
for (int i = n-1; i >= 0 ; i--)
printf ( "%i , " , a[i]);
return 0;
}
