#include <stdio.h>
int main(){
    char s[30];
    scanf("%s",s);
    int i=0;
    while(s[i]!='@'&&s[i]!='\0'){
    printf("%c",s[i]);
        i++;
    }

}