// Write a program to recive values of latitude (L1,L2) and longitude (G1,G2),in degrees.
// of two places on earth and outpue the distance between them in nautical miles.The formula for distance in nautical mailes is:
// D = 3963 acos (sinL1sinL2 + cosL1Cosl2* cos (G2-G1))

#include <stdio.h>
#include <math.h>


int main ()
{
float l1,l2,lon1,lon2,D;

printf("Please enter the values for lattitude L1 and L2\n");
scanf("%f%f",&l1,&l2);

printf("Please enter the values for longitude G1 and G2\n");

scanf("%f%f",&lon1,&lon2);

l1= l1 * 3.14/180;
l2= l2 * 3.14/180;
lon1= lon1 * 3.14/180;
lon2= lon2 * 3.14/180;


D = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(lon2-lon1));

printf("the distance in miles is %f\n",D);

return 0;

}

