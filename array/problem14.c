#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int price[n];
    for(i=0;i<n;i++){
        scanf("%d",&price[i]);
    }
    int min=100000;
    for(i=0;i<n;i++){

        if(price[i]>0){
            if(price[i]<min){
                min=price[i];
            }
        }
    }
    if(min==100000){
        printf("No positive");
    }
    else{
        printf("%d",min);
    }
    return 0;
}
