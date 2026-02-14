#include <stdio.h>
int main(){
    int a,b,choice;
    printf("Choose option\n");
    printf("Addition: option1\n");
    printf("Subtraction: option2\n");
    printf("Division : option3\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        scanf("%d %d",&a,&b);
        printf("Addition:%d",a+b);
        break;
        case 2:
        scanf("%d %d",&a,&b);
        printf("Subtraction:%d",a-b);
        break;
        case 3:
        scanf("%d %d",&a,&b);
        printf("Division:%d",a/b);
        break;
        default:
        printf("Invalid option");

    }
}