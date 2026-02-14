#include <stdio.h>
#include <string.h>

int main(){
    char s[30];
    fgets(s,30,stdin);
    int i=0;
    int len=strlen(s);
    for(i=len-1;i>=0;i--){
        printf("%c",s[i]);
    }
}