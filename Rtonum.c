#include<stdio.h>
#include<string.h>
 
int digit(char);
 
int main(){
 
    char r[1000];
    int i=0;
    int n =0;
    scanf("%s",r);
    while(r[i]){
         if(digit(r[i]) < 0){
             return 0;
         }
         if((strlen(r) -i) > 2){
             if(digit(r[i]) < digit(r[i+2])){
                 return 0;
             }
         }
         if(digit(r[i]) >= digit(r[i+1]))
             n = n + digit(r[i]);
         else{
             n = n + (digit(r[i+1]) - digit(r[i]));
             i++;
         }
         i++;
    }
 
    printf("%d",n);
 
    return 0;
 
}
 
int digit(char c){
 
    int v=0;
 
    switch(c){
         case 'I': v = 1; break;
         case 'V': v = 5; break;
         case 'X': v = 10; break;
         case 'L': v = 50; break;
         case 'C': v = 100; break;
         case 'D': v = 500; break;
         case 'M': v = 1000; break;
         case '\0': v = 0; break;
         default: v = -1; 
    }
 
    return v;
}
