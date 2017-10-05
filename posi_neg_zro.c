// Write a program to enter the numbers till the user wants and 
// at the end it should display the count of positive, negative and zeros entered.

#include <stdio.h>



int main(){
	int num;
	char choice;
	
	int positivive_count=0,negative_count=0,zero_count=0;
	do{
		

       	printf("Please enter do you wish to continue? Enter Y for yes and N for no \n");
		scanf("%c",&choice);

		  printf("please enter the number \n");
		  scanf("%d",&num);


   }while(choice!='N');
   printf(" Positive no count is %d, negative no count is %d and zero count is %d\n",positivive_count,negative_count,zero_count);
   return 0;
}