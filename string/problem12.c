#include <stdio.h>
int main(){
    char s[30];
    fgets(s,30,stdin);
    int count=0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='#'||s[i]=='@'||s[i]=='$'||s[i]=='%'||s[i]=='&'){
            count++;
        }
        i++;
    }
    printf("%d",count);
}