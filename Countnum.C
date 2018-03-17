

#include <stdio.h>
int main()
{
    char str[100];
    int i,cnt=0;
    scanf("%[^\n]s",str);
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9'){
            cnt++;
        }
        
    }
    printf("%d",cnt);

    return 0;
}
