
#include <stdio.h>

int main()
{
 int a,b;
 int i,f;
 scanf("%d",&a);
 scanf("%d",&b);
 while(a<b)
 {
 f=0;
 for(i=2;i<=a/2;++i)
 {
 if(a%i==0)	
 {
 f=1;
 break;
 }
 }
 if(f==0)
  printf("%d\n",a);
  
 ++a;
 }
 
    return 0;
}



