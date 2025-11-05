#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){

   char a[13]="cprogramming";
   for(int i=0;i<12;i++){
    for(int j=0;j<=i;j++){

        printf("%c",a[j]);
    }
    printf("\n");
   }
   for(int i=0;i<12;i++){
    for(int j=0;j<=12-i;j++){
        printf("%c",a[j]);
    }
    printf("\n");
   }
    return 0;
}

