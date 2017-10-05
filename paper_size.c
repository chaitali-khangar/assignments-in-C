// Paper of size A0 has dimension 1189mm X 841mm.Each subsequent size A(n) is defined as A(n-1) 
// cut in half parallel to its shorter side. write prog to cal and print paper size
// A0,A1,A2...A8

#include <stdio.h>

int main(){
int A0,A1,A2,A3,A4,A5,A6,A7,A8,x;
int h,w,w1,h1,h2,w2,w3,h3,h4,w4,h5,w5,h6,w6,h7,w7,h8,w8;
h=1189;
w=841;

printf("Paper size of A0 is %d X %d\n", h,w);
h1=w;
w1=h/2;

printf("Paper size of A1 is %d X %d\n", h1,w1);

h2=w1;
w2=h1/2;

printf("Paper size of A2 is %d X %d\n", h2,w2);

w3=h2/2;
h3=w2;

printf("Paper size of A3 is %d X %d\n", h3,w3);

w4=h3;
h4=w3/2;

printf("Paper size of A4 is %d X %d\n", h4,w4);

w5=h4;
h5=w4/2;

printf("Paper size of A5 is %d X %d\n", h5,w5);
w6=h5;
h6=w6/2;

printf("Paper size of A6 is %d X %d\n", h6,w6);
w7=h6;
h7=w6/2;

printf("Paper size of A7 is %d X %d\n", h7,w7);


return 0;

}