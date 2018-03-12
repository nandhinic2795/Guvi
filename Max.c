#include <stdio.h>

int main(void) {
	int n,a[50],i,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		
		if(a[i+1]<max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
	
	// your code goes here
	return 0;
}
