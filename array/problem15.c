#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k++;
        }
    }
    while(k<n){
        arr[k]=0;
        k++;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}