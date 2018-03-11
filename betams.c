#include <stdio.h>

int main(void) {
	int n1,n2,n,r,d=10;
            int sum;
	scanf("%d",&n1);
	scanf("%d",&n2);
	for(n=n1;n<=n2;)
	{
	    sum=0;
           d=n;
	while(d!=0)
	{
		r=d%10;
		sum=sum+(r*r*r);
	d=d/10;	
	}
			if(sum==n){
		printf("%d",n);
		
	}
	++n;
	}
	// your code goes here
	return 0;
}
