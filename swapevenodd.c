#include <stdio.h>
#include <string.h>
void main(){
     char s[20],t;
     int i,j,l;
     scanf("%s",s);
     l=strlen(s);
     for(i=0;i<l;i=i+2){
     t = s[i];
     s[i] = s[i+1];
     s[i+1] = t;
     }
     printf("%s",s);
}
