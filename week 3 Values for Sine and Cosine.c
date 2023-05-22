
#include <stdio.h>
#include <math.h>

int main(void) {

double interval; //declaration
int i; //declaration
int p; //declaration

printf("The label of values for Sine are:\n"); //Print title

for(i = 0; i <11; i++) { // for statement
 interval = i/10.0; // calcuations so that we get 10 values at 0.1 intervals
 printf("sin( %lf ) = %lf \n", interval, fabs(sin(interval)) ); // Print Sine Values

 
}

printf("\n"); 

 printf("The label of values for Cosine are:\n"); //Print title
 
for(p = 0; p <11; p++) { // for statement
 interval = p/10.0; // calcuations so that we get 10 values at 0.1 intervals
 printf("cos( %lf ) = %lf \n", interval, fabs(cos(interval)) );  // Print Cosine Values
 
}

return 0; 

}
