#include <stdio.h>
int main(){
    char s[20];
    char s2[20];
    fgets(s,20,stdin);
    int i=0;
    while(s[i]!='\0'){
        s2[i]=s[i];
        i++;
    }
    printf("%s",s2);

}