#include <stdio.h>
int power(int x, int y);
int add(int x);
int main()
{
int result,num,n;
num=2;
n=15;


result = power(num,n);
int sum = add(result);
printf("No is %d & sum is %d \n",result,sum );
return 0;
}


int power(int num, int n)
{
if (n==0)
{
	return 1;

	/* code */
}
return num * power(num,n-1);
}

int add(int num){
int reminder;

int sum = 0;
while(num!=0)
{
reminder = num%10;
sum = reminder + sum;
num = num /10;
}
return sum;
}



