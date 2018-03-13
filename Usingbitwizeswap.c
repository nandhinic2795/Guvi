#include <stdio.h>

int main(void) {
         int n2,n1;
         scanf("%d",&n1);
        scanf("%d",&n2);
        n1=n1^n2;
        n2=n1^n2;
        n1=n1^n2;
        printf("%d %d",n1,n2);
         	return 0;
}
