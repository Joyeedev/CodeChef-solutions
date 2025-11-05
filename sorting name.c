#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
        }
    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(s[i],s[j])>0){
                char temp[100];
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
    printf("%s\n",s[i]);}



    return 0;
}

