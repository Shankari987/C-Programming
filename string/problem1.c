#include <stdio.h>
int main(){
    char s[30];
    scanf("%s",s);
    int count=0;
    int i=0;
    while(s[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
}