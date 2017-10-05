#include <stdio.h>
#include <math.h>

int main(){

	int a;

	for (int i = 0; i<=4; i++)
	{
		a=65+i;
		for (int j = 5; j>=i; j--)
		{
			printf("%c", a);
			a++;
		
		}
		printf("\n");

	}
	return 0;
}