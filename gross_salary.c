// Ramesh basic salary input through the keyboard.
// His DA is 40% of Basic salary and house rent allowance is 20% of basic salary.
// Calcualate the gross salary.

#include <stdio.h>

int main()
{
float bs,da,hr,gs;

printf("Please enter your basic salary\n");
scanf("%f", &bs);
da = 0.4 * bs;
hr = 0.2 * bs;
gs = bs + da + hr;

printf("your gross salary is %f\n", gs);



return 0;


}