#include <stdio.h>
int main(){
    char s[50];
    fgets(s,50,stdin);
    int i=0;
    int count =1;
    while(s[i]!='\0'){
        if(s[i]==' '){
            count++;
        }
        i++;
    }
    printf("%d",count);
}