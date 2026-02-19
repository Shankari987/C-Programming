#include <stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("%d",count);
}