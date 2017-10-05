// Write a program to receive cartesian co-ordinates (x,y) of a point and convert them to polar co-ordinates(r,theta)

#include <stdio.h>
#include <math.h>

int main(){
float x,y,r,theta;

printf("Please enter the X and Y cartesion co-ordinates\n");
scanf("%f%f",&x,&y);

r= sqrt(x*x + y*y);

theta = atan2(y,x);
theta = theta * 180/3.14;

printf("The Polar co-ordinates of X and Y are %f,%f\n", r,theta);

return 0;



}