#include <stdio.h>

int main(void) {
	int n,d,i,prime=0;
	scanf("%d",&n);
	d=n/2;
	for(i=2;i<=d;i++)

{
	if(n%i==0)
	{
		printf("No");
		prime=1;
		break;
	}
	
}	
if(prime==0)
{
	printf("Yes");
}
	return 0;
}
