
#include <stdio.h>

int main()
{
    char str[50];
    int i,count;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
        }
        else
        count++;
    }
    printf("%d",count);
    return 0;
}
