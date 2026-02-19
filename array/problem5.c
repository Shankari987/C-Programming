#include <stdio.h>
int main(){
    int i, n,sum=0,missing,expected;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
     for(i=1;i<n;i++){
        sum=sum+arr[i];
    }
    expected=n*(n+1)/2;
    missing=expected-sum;
    printf("%d",missing);
}
