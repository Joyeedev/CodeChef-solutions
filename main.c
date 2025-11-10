#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


int main(){
    char s1[100];
    char s2[100];
    int count=0;
    scanf("%s",s1);
    int l=strlen(s1);
    for(int i=0;i<l;i++){
        s2[i]=s1[l-i-1];
        s2[l]='\0';

    }
   for(int i=0,j=l-1;i<j;i++,j--){
    s2[i]=s2[j]='*';
    printf("%s\n",s2);
   }



    return 0;
}

