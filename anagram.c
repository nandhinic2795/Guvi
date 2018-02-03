
#include<stdio.h>
 void main()
 {
char str[10],str1[10];
int i,j,len,count=0;
scanf("%s",str);
len=strlen(str);
for(i=len-1,j=0;i>=0;i--,j++)
{
	str1[j]=str[i];
count++;
}
printf("%d",count-(len-1));
}
