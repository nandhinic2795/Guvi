#include <stdio.h>

int main(void) {
         int n,r=0,cnt=0;
         scanf("%d",&n);
         while(n!=0)
         {
             r=r%10;
             cnt++;
             n=n/10;
         }
         printf("%d",cnt);
	return 0;
}
