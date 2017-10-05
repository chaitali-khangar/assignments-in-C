#include <stdio.h>

int main()
{
	for (int i = 1; i<=4; i++)
	{
		for (int j = 5; j>=i; j--)
		{
			printf("*");
		}
		for (int k=1; k<i; k++)
		{
			printf(" ");
		}
		for (int y=1; y<i; y++)
		{
			printf(" ");
		}
		for (int z = 5; z >=i; z--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int a =1; a<=5; a++)
	{

		for (int b =1; b<=a; b++)
		{
			printf("*");
		}
		for (int c=5; c>a; c-- )
		{
			printf(" ");
		}
		for (int x=5; x>a; x-- )
		{
			printf(" ");
		}
		for (int n = 1; n<=a; n++)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}