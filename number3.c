#include <stdio.h>

int main(){

	for (int i = 0; i <=5; i++)
	{

		for (int j = 5; j > i; j--)
		{
			printf(" ");
		}
		for (int k = i; k>=0; k--)

		{		
			
				printf("%d",k);
						
		}
		for (int l = 0; l<=i; l++)
		{
			if (l>0)
			{
				printf("%d",l);
			}
		}
		printf("\n");
		
	}

return 0;


}