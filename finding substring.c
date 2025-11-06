#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){
    char s1[100];
    char s2[100];
    int count=0;
    scanf("%s %s",s1,s2);
    int len1=strlen(s1);
    for(int start=0;start<len1;start++){
            char temp[100]="";
        for(int end=start;end<len1;end++){
            temp[strlen(temp)]=s1[end];
            temp[strlen(temp)+1]='\0';
            if(strstr(s2,temp)!=NULL){count++;}
        }
    }
    printf("%d",count);



    return 0;
}

