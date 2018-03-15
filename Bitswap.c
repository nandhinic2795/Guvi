#include <stdio.h>

int main(void) {
         int X,Y;
         scanf("%d",&X);
        scanf("%d",&Y);
        X=X^Y;
        Y=X^Y;
        X=X^Y;
        printf("%d %d",X,Y);
         	return 0;
}
