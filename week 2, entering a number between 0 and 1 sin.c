#include <stdio.h>
#include <math.h>

int main()
{

double x; // declaration
printf("enter a value for x between 0 or 1: ");  // prompts user to enter a value for X
scanf ("%lf", &x); // stores the variable x

double result = sin (x); // declaring the sin() function from the math.h library
printf(("%lf \n"), result); // printing the calculated sine result 

    return 0;
}
