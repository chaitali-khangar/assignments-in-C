// Two numbers are input through the keyboard into two locations C and D.write a program to interchange the content of C and D


#include <stdio.h>

int main(){
int C,D,E;

printf("please enter the value of C and D\n");
scanf("%d%d",&C,&D);

E=C;
C=D;
D=E;

printf("the value of C is %d and D is %d\n",C,D);
return 0;



}