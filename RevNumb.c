#include <stdio.h>

int main(void) {
	int n,d=0,r;
  scanf("%d",&n);
  while(n!=0)
  {
     r=n%10;
     d=r+(d*10);
     n=n/10;  
  }
  printf("%d",d);
	// your code goes here
	return 0;
}
