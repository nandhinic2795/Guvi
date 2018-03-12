#include <stdio.h>

int main(void) {
	int n,a,d,v,sum=0,i;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&d);
	v=a;
	for(i=0;i<n;i++)
	{
	sum+=v;
	v=v+d;
	}
	printf("%d",sum);
	
	// your code goes here
	return 0;
}
