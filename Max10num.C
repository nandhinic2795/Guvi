
#include <stdio.h>
int main()
{
    int s[10];
    int i,max;
    for(i=0;i<10;i++)
    {
        scanf("%d",&s[i]);
    }
    max=s[0];
    for(i=1;i<10;)
    {
       if(s[i]>max){
           max=s[i];
       } 
       i++;
    }
    printf("%d",max);

    return 0;
}
