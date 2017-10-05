#include <stdio.h>
#include <stdbool.h>


int main()
{
	int num,count,reminder,sum;
	int triangle_number[11];
	sum = 0;

		
	for (num = 1; num<=11; num++){
		
		
	    sum = num + sum;
		triangle_number[num]=sum;
			// printf("%d\n", triangle_number[num] );
		count=0;
		for (int i = 1; i <= triangle_number[num]; i++)
		{
			
			
			
			reminder = triangle_number[num] % i;
			if (reminder==0)
			{
				// printf("%d,%d\n",i , triangle_number[num]);
			
				count++;

			}
		}
		if(count>=5){
			printf("%d\n",triangle_number[num]);
			break;
		}

	}
		
	return 0;
}