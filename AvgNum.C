
#include <stdio.h>
int main()
{
    int sum=0,i,n1;
    int n[50],avg=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<n1;i++)
    {
        sum=sum+n[i];
    }
    avg=sum/n1;
    printf("%d",avg);
    return 0;
}
