#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){
    char s[5][100];
    char r[5][100];
    for(int i=0;i<5;i++){
        scanf("%s",s[i]);
    }
    for(int i=0,j=4;i<5;i++,j--){
        strcpy(r[i],s[j]);
        printf("%s ",r[i]);
    }



    return 0;
}

