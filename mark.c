// If the marks obtained by a student in five diff subjects are input through keyboard,
// write a program to find out the aggregate makrs and percentage marks obtained by the student.
// Assume that the max marks that can be obtaained by a student in each subject is 100.


#include <stdio.h>

int main(){

float sub1,sub2,sub3,sub4,sub5,aggregate,percentage;

printf("Please enter the marks for five subjects out of 100\n");
scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);

aggregate = sub1+sub2+sub3+sub4+sub5;
percentage = (aggregate/500) * 100;

printf("The aggregate of your mark is %f and percentage are %f\n", aggregate,percentage );

return 0;
}