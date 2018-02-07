#include <stdio.h>

int main(void) {
	int n,i,count=0,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		count++;
		n=n/10;
	}
	
printf("%d",count);	// your code goes here
	return 0;
}
