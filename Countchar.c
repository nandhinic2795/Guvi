
#include <stdio.h>

int main()
{
    char str[50];
    int i,count;
    scanf("%[^\n]s",str);
    for(i=0;i<=50;i++)
    if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
    {
        count++;
    }
printf("%d",count);
    return 0;
}
