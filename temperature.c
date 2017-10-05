// Temp of a city in Fahrenheit degrees is input through keyboard.
// write a program to convert the temp into centigrate deg.

#include <stdio.h>
#include <math.h>

int main(){

float fr,c;

printf("Please enter the temperaure of your city in Fahrenheit\n");
scanf("%f",&fr);

c = ( fr - 32.0 )/1.80;

printf("The temp of your city in celcius is %f\n", c );

return 0;

}