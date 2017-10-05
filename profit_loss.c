// if cost price and selling price input through the keyboard,
// write a progm to determine whether the seller has made profit or incurred loss,
// also determine how much profit he made oe loss he occured.

#include <stdio.h>

int main(){
float cp,sp,p,l;

printf("Please enter the cost price and selling price\n");
scanf("%f%f",&cp,&sp);



if (sp>cp)
{
	p = sp-cp;

	printf("The seller has made a profit of Rs.%f\n",p );
}

else{
	l=sp-cp;
	printf("The seller has loss of Rs%f\n",l );
}
return 0;


}