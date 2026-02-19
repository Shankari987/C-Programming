#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int temp[k];
    for(i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }
    
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
