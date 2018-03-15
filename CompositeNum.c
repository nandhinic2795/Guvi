#include <stdio.h>

int main(void) {
	int n,d,i,f=0;
	scanf("%d",&n);
d=n/2;
for(i=2;i<d;i++)
{
	if(d%i==0)
	{
		f=1;
		break;
	}
}
if(f==0)
{
	printf("No");
}
else
{
	printf("Yes");
}
	// your code goes here
	return 0;
}
