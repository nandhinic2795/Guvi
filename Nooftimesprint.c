#include <stdio.h>

int main(void) {
	char str[50];
	int k,i;	
	scanf("%[^\n]s",str);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%s\n",str);
	}
	return 0;
}
