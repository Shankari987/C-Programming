#include <stdio.h>
int main(){
    char pass[30];
    scanf("%s",pass);
    int count=0;
    int i=0;
    while(pass[i]!='\0'){
        if(pass[i]>='A' && pass[i]<='Z'){
            count++;
        }
        i++;
    }
    if(count>=1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}