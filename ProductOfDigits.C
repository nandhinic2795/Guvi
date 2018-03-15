#include <stdio.h>

int main(void) {
	int n,r,p=1;
  scanf("%d",&n);
while(n!=0){
   r=n%10;
   p*=r;
   n=n/10;
}
 printf("%d",p);
	// your code goes here
	return 0;
}
