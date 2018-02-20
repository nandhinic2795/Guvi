#include <stdio.h>

int main(void) {
	// your code goes here
	int n,sum=0,r,a,v=0,n1,s;
	scanf("%d",&n);
 n1=n;
	while(n1!=0)
	{
		r=n1%10;
		sum=sum+r;
		n1=n1/10;
	}
	s=sum;
	while(sum!=0)
	{
				a=sum%10;
		v=(v*10)+(a);
		sum=sum/10;

	}
	if(v==s)
	{
		printf("Yes");
	}
	else{
	printf("No");
	}
	return 0;
}
