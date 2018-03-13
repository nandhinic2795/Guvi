#include <stdio.h>

int main(void) {
	char str[50];
           char str1[50];
           int len=0,i,j;
           scanf("%s",str);
           scanf("%s",str1);
           for(i=0;str[i]!='\0';i++)
           {
           	len++;
           }
           for(j=0;j<10;j++)
           {
           	str[len++]=str1[j];
           }
           printf("%s",str);
	return 0;
}
