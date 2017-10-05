// The length and breath of a rectangle and radius of a circle are input through the keyboard.write a program to calculate
//  the area and perimieter of the rectangel and the are and circumference of the circle.

#include <stdio.h>

int main(){
float area1,l,b,r,perimeter,area2,circumference;

printf("Please enter the values of length and bridth of rectangel\n");
scanf("%f%f",&l,&b);
printf("Please enter the radius of circle\n");
scanf("%f",&r);

area1 = l*b;
perimeter = (2*l) + (2 * b) ;

area2 = 3.14 * r*r;

circumference= 2 * 3.14 * r;

printf("area of rectangle is %f and perimieter of rectangle is %f\n", area1, perimeter);
printf("area of circle is%f and circumference of circle is %f\n",area2, circumference);
return 0;


}