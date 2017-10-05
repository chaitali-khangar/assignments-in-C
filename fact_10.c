#include <stdio.h>
int fact(int x);
int add(int x);

int main()
{
int num,result;
num=10;

result = fact(num);
int sum = add(result);

printf("the fact is %d is %d\n",result,sum );

return 0;
}
int fact(int num)
{
 	if (num==0)
 	{
 		return 1;
 		/* code */
 	}

 	return num* fact(num-1);


}

int add(int num){

int reminder;

int sum=0;

while(num!=0){

	reminder = num % 10;
	sum = reminder + sum;
	num = num / 10;
}
return sum;



}