#include <stdio.h>

int main(void) {
	int a,n,sum=0,num;
	scanf("%d",&n);
	num=n;
while(n!=0)
{
	a=n%10;
	sum=sum+(a*a*a);
	n=n/10;
	
}
if(sum==num)
{
	printf("Yes");
}
else
{
	printf("No");
}
	return 0;
}
