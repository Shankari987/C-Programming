#include <stdio.h>
int main(){
    int i,j;
    char ch;
    for(i=1;i<=5;i++){
        ch='E'-i;
        for(j=1;j<=i;j++){
            printf("%c",ch+j);
        }
        printf("\n");
    }
}