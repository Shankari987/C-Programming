#include <stdio.h>
int main(){
    char s[30];
    fgets(s,20,stdin);
    int i=0;
    int count=0;
    while(s[i]!='\0'){
        if(s[i]==' '){
            count++;
        }
        i++;

    }
    printf("%d",count);

}