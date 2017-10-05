/*to find the armstrong number*/

#include <stdio.h>

int main (){
		int num,num1,reminder,result;
       for(num=1;num<=2000;num++){
		num1 = num;
		result = 0;
		while(num1!=0)
		{
			reminder = num1%10;
			result=reminder*reminder*reminder+result;
			num1/=10;

		}

		if(result==num){
		printf("The entered number %d is armstrong number\n",num );

		}/*else{
			printf("the entered number %d is not armstrong number\n",num);
		}*/
	  }
	return (0);

}
