
#include <stdio.h>
int main()
{
    char str[100],t[100];
    int a=0,b=0,i;
    scanf("%[^\n]s",str);
    while(str[a]!='\0'){
        if(str[a]==' ')
        {
            i=a+1;
            if(str[i]!='\0')
            {
                while(str[i]==' ' && str[i]!='\0')
                {
                    if(str[i]==' '){
                        a++;
                    
                    }
                
                    i++;
                }
            }
        }
        t[b]=str[a];
        a++;
        b++;
    }
    
        t[b]='\0';
        printf("%s",t);
    return 0;
}




