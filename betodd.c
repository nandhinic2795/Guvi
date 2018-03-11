#include <stdio.h>

int main(void) {
	int n1,n2,n;
	scanf("%d",&n1);
	scanf("%d",&n2);
	for(n=n1+1;n<=n2;n++)
	{
		if(n%2!=0){
			printf("%d ",n);
		}
	}
	// your code goes here
	return 0;
}
