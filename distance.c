// The distance between the two cities (in KM) is input through the keyboard.
// Write a program to convert and print this distance in meters,feet, inches,and centimeters.
#include <stdio.h>

int main ()
{
float km,m,cm,inches,feet;

printf("Please enter the distnace betwwen two cities in km\n");
scanf("%f", &km);

m = 1000 * km;
cm = 100 * m;
inches = cm/2.54;
feet = inches/12;

printf("The distnace between two cities in m is %f\n", m);
printf("The distnace between two cities in cm is %f\n", cm);
printf("The distnace between two cities in inches is %f\n", inches);
printf("The distnace between two cities in feet is %f\n", feet);

return 0;

}