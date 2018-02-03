#include<stdio.h>
int main()
{
int n,a[50],c=0;
int j,i,r;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]<0)
{
break;
}
}
for (i = 1; i<n; i++)
   {
       r= a[i];
       j = i-1;
       while (j >= 0 && a[j] > r)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = r;
   }
for(j=n-1;j>=0;j--)
{
printf("%d",a[j]);
}
return 0;
}
