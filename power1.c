#include <stdio.h>
int getpower(int x,int y);

int main()
{
	int a,b,result,index,count;
	int array[100];
	index=1;

	for (a = 2; a <= 5; a++)
	{
		for (b = 2; b <= 5; b++)
		{
			++index;
			result = getpower(a,b);
			
			array[index] = result;
			
		}
		
		
	}
	count = sizeof(array);
	for(int i = 1; i <= count; ++i)
	{
	// printf("%d \n",array[i]);
	}
	

	return 0;
	
}

int getpower(int a, int b){

if (b==0)
{
	return 1;
}
return a* getpower(a,b-1);
}