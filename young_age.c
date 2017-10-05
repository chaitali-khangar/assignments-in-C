// If the ages of Ram, Shyam and Ajay are input through the keyboard,
//  write a program to determine the youngest of the three.

#include <stdio.h>

int main(){
	int ram,shyam,ajay;

	printf("Please enter the ages of ram,shyam and ajay\n");
	scanf("%d%d%d",&ram,&shyam,&ajay);

	if (ram < shyam && shyam < ajay)
	{
	
		printf("Ram is the youngest \n");
		
	}
	if (shyam < ram && ram < ajay)
	{
		
		printf("Shyam is youngest\n");
		
	}
	if (ajay < ram && ram<shyam)
	{
		
		printf("Ajay is youngest\n");
		
	}
	return 0;

}