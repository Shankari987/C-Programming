#include <stdio.h>
int main(){
    char s[30];
    fgets(s,30,stdin);
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        i++;
    }
    printf("%s",s);
}