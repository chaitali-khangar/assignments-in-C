 // Write a program to print all the ASCII values and their equivalent characters using a while loop. 
 // The ASCII values vary from 0 to 255.


# include <stdio.h>

int main(){
	unsigned char letter;
	int max_val = 255;

	while(max_val>=0)
	{

		letter = (char) max_val;
		
		printf("%d ascii value is %c\n", max_val,letter);
		max_val--;
	}
	
return 0;



}