#include<stdio.h>
#define PI 3.14159

int main(void)
{ 
 int radius;
 printf("Enter radius:  ");
 scanf("%d" , &radius);
 int volume = ((4*radius*radius*radius*PI)/3);
printf("volume is : %d cm3 \n", volume);
return 0;
}