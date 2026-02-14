#include <stdio.h>
int main(){
    char s[20];
    fgets(s,20,stdin);
    char c;
    scanf(" %c",&c);
    int i =0;
    while(s[i]!='\0'){
        if(s[i]==c){
            printf("%d",i);
            return 0;

        }
        i++;
    }
    printf("-1");
}