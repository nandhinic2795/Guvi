#include <stdio.h>

int main(void) {
	char s1[5],s2[5];
	int a,b,c;
	scanf("%s\n%s",s1,s2);
	a=atoi(s1);
	b=atoi(s2);
	c=a*b;
	printf("%d",c);
	// your code goes here
	return 0;
}
