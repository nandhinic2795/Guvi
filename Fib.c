#include <stdio.h>
int main()
{
    int f=1,s=1,n;
    int i,n1;
    scanf("%d",&n1);
    printf("%d %d",f,s);
    for(i=2;i<n1;i++)
    {
       n=f+s; 
       printf(" %d",n);
       f=s;
       s=n;
    }
  
    return 0;
}
