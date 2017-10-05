#include <stdio.h>

int main (){
	
int a;
	for (int i =1; i<=7; i++)
	{
		a=65;
		for (int j = 7; j>=i; j--)
		{
			printf("%c",a);
			a++;
		}
		for (int k = 1; k<i; k++)
		{
			printf("  ");
		}
		for (int j = 7; j>=i; j--)
		{
			--a;
			printf("%c",a);
			
		}

		printf("\n");
	}
	return 0;
}