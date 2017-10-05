// consider a Currency system in which there are notes of seven denomations,namely,Re.1,Rs.2,Rs.5,Rs,10,Rs.50,Rs100,
// If Sum of Rs.N is entered through the keyboard write a progm to compute the smallest number of notes that will combine to give Rs.N.


#include <stdio.h>
#include <math.h>

int main(){

	int r1,r2,r5,r10,r50,r100,n,sum;

	printf("please enter the sum of Rs.\n");
	scanf("%d",&n);

	r100 = n/100;
	n=n%100;
	r50 = n/50;
	n=n%50;
	r10 = n/10;
	n=n%10;
	r5=n/5;
	n=n%5;
	r2=n/2;
	n=n%2;
	r1=n/1;
	n=n%1;

	sum=r100+r50+r10+r5+r2+r1;

	printf("smallest number of notes is %d\n",sum );



return 0;




}