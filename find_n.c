#include <stdio.h>

int main()
{
	int n;

	printf("Please enter the number greater than 1\n");
	scanf("%d" ,&n);

	if (n==1)
	{
		printf("the entered number %d is not valid for this, please enter the number greater than 1 \n", n);
		scanf("%d",&n);
	}

	while(n!=1){
		if (n%2==0)
		{
			n=n/2;/* code */
		}

		else{
			n=3*n+1;

		} 
		printf("%d\n",n );


	}
return 0;




}