#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int price[n];
    for(i=0;i<n;i++){
        scanf("%d",&price[i]);
    }
    int target ;
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((price[i]+price[j])==target){
                printf("%d %d",price[i],price[j]);
                return 0;
            }
        }
    }
    
    printf("No pair");
}
