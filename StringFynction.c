#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){
    char c[200];
    scanf("%s",c);
    char s[200]="hello";
    char result[200];
    strncpy(result,c,10);
    strcat(s," ");
    strncat(s,result,6);
    printf("%s",s);




    return 0;
}

