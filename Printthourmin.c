#include <stdio.h>

int main(void) {
	int totalmin=0;
	int min=0,hour=0;
	scanf("%d",&totalmin);
	min=totalmin%60;
    hour=(totalmin-min)/60;
    printf("%d %d",hour,min);
	// your code goes here
	return 0;
}
