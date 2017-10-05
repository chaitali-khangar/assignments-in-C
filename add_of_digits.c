#include <stdio.h>

int main(){
int num,sum,reminder,num1;

num=12345;
sum=0;

for (int i = 1; i<=5; i++)
{
	
	

	reminder = num%10;
	sum = reminder + sum;

	num=num/10;

	
}

printf("%d\n",sum );


return 0;


}