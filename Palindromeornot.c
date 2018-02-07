#include <stdio.h>

int main(void) {
	int n,r,a,sum=0;
	scanf("%d",&n);
	a=n;
while(a!=0)
{
	r=a%10;
	sum=sum*10+(r);
	a=a/10;
}
if(n==sum)
{
	printf("Yes");
}
else
{
	printf("No");
}

// your code goes here
	return 0;
}

