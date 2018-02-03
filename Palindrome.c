#include <stdio.h>
int main()
{
int n,sum=0,r,a;
scanf("%d",&n);
a=n;
while(n!=0)
{
	r=r*10;
	r=r+(n%10);
	n=n/10;
}
if(r==a)
{
	printf("Yes");
}
else
{
	printf("No");
}
return 0;
}
