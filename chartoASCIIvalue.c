#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){
    char c[200];
    scanf("%s",c);
    for(int i=0;i<strlen(c);i++){
        printf("%d\n",(int)c[i]);
    }



    return 0;
}

