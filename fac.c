#include <stdio.h>

int main(void) {
	int n,fac=1,i;
	scanf("%d",&n);
for(i=1;i<=n;i++)
{
	fac=fac*i;
}
	printf("%d",fac);
	// your code goes here
	return 0;
}
