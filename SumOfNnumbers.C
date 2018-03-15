#include <stdio.h>

int main(void) {
	int i,n,n1[50],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&n1[i]);
	}	
	for(i=0;i<n;i++)
	{
		sum+=n1[i];
	}
	printf("%d",sum);
	// your code goes here
	return 0;
}
