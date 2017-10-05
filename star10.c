#include <stdio.h>

int main()
{
	int k;
	for (int i = 1; i <=4; i++)
	{
		for (k = 5; k>i; k--)
		{
			printf(" ");
		}
		printf("*");

		for (int j =1;j<i ; j++)
		{
			printf("  ");
		}
		if(i>1){
		printf("*");
		}

		printf("\n");
	
}
	for (int a= 1; a<=5; a++)
	{
		for (int b = 1; b<a; b++)
		{
			printf(" ");
		}
		printf("*");

		for (int c = 5;c>a ; c--)
		{
			printf("  ");
		}
		if (a<5)
		{
			printf("*");
		}
		

		printf("\n");
	}



	return 0;
}