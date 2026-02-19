#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int currentstreak=1;
    int maxstreak=1;
    for(i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            currentstreak++;
        }
        else{
            currentstreak=1;
        }
        if(currentstreak>maxstreak){
        maxstreak=currentstreak;
    }

    }
    printf("%d",maxstreak);

  
}