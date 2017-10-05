// Find the absolute value of a number entered through the keyboard.
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Please enter the number \n");
	scanf("%d",&num);

	printf("the absolute number of %d is %d\n",num,abs(num) );
	return 0;

}