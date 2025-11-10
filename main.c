#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int repeating(char s[100]){
    char freq[100]={0};
    for(int i=0;s[i]!='\0';i++){
        char ch=s[i];
        freq[ch]++;
        if(freq[ch]>1){return 1;}

    }
    return 0;
}
int main(){
    char s1[100];
    char s2[100];
    int count=0;
    char sub[100][100];
    scanf("%s %s",s1,s2);
    int len1=strlen(s1);
    for(int start=0;start<len1;start++){
            for(int end=start;end<len1;end++){
            char temp[100]="";
            strncpy(temp,s1+start,end-start+1);
            temp[end-start+1]='\0';
            if(strstr(s2,temp)!=NULL){
                strcpy(sub[count],temp);
                count++;
            }

        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++){
        if(repeating(sub[i])){printf("repeating:%s\n",sub[i]);}
            else {printf("non repeating:%s\n",sub[i]);}
        }


    return 0;
}

