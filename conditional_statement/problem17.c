#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=10 &&num<=20){
        printf("%d Number is within range",num);
    }
    else{
        printf("%d is not lies between 10 and 20",num);
    }
}