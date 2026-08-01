#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest= arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int second=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]!=largest && arr[i]>second){
            second=arr[i];
        }
    }
    printf("%d",second);
}
