#include <stdio.h>

int main(void) {
	char str[10];
	int i,j=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i-1]==str[i])
		{
			j=i-1;
			j++;
			while(1)
			{
				if(str[j]==str[j+1])
				{
				j++;
				}
				else
				{
					break;
				
				}
			}
				printf("%c",str[i]);
				i=j;
			}
		}
	
			
		
	
	// your code goes here
	return 0;
}
