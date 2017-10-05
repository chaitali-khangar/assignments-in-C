#include <stdio.h>

int main()
{
	int a,b,c,result;

	for (a=1; a<=500; a++)
	{

		for (b=a; b<=500; b++)
		{
			for (c=b; c<=500; c++)
			{
				if (a*a + b*b == c*c &  a+b+c==1000)
				{

					result= a*b*c;
					printf("%d\n%d\n%d\n%d\n" ,a,b,c,result);
				}

				/* code */
			}
			/* code */
		}
		/* code */
	}

return 0;


}