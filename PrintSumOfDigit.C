#include <stdio.h>

int main(void) {
         int n,sum=0,r;
         scanf("%d",&n);
         while(n!=0)
         {
             r=n%10;
             sum+=r;
             n=n/10;
         }
         printf("%d",sum);
         	return 0;
}
