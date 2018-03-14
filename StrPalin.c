#include <stdio.h>
#include<string.h>
int main(void) {
	char str[50];
	int i=0,len;
	scanf("%s",str);
	len=strlen(str)-1;
	while(len>1)
	{
		if(str[i++]!=str[len--])
		{
			printf("No");
			return;
		}
	}
	printf("Yes");
	
	// your code goes here
	return 0;
}
