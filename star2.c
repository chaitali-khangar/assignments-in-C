#include <stdio.h>

int main(){
	char x;
	x= '*';

		for (int i = 1; i <=5; i++)
		{
			for (int k= 1; k<i; k++)
				{
					printf(" ");
				}
			for (int j=5; j>=i; j--)
			{
				printf("*");
	
			}

			printf("\n");

		}
	return 0;	
}