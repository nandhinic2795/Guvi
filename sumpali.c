#include <stdio.h>

int main(void) {
	// your code goes here
	int n,sum=0,r,a,v=0,n1;
	scanf("%d",&n);
 n1=n;
	while(n1!=0)
	{
		r=n1%10;
		sum=sum+r;
		n1=n1/10;
	}
	while(sum!=0)
	{
				a=sum%10;
		v=(v*10)+(a);
		sum=sum/10;

	}
	if(v==n)
	{
		printf("yes");
	}
	else{
	printf("No");
	}
	return 0;
}
