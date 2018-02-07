#include <stdio.h>

int main(void) {
	int year;
	scanf("%d",&year);
	if((year%100!=0)&&(year%4==0)||(year%400==0))
	{
		printf("Leap year");
	}
	else
	{
	printf("Not a leap year");	
	}
	
	// your code goes here
	return 0;
}
