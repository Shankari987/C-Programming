#include <stdio.h>
int main(){
    int i,n,avg,count=0;
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    int total=0;
    for(i=0;i<n;i++){
        total=total+marks[i];
    }
    avg=total/n;
    for(i=0;i<n;i++){
        if(marks[i]>avg){
            count++;
        }
    }
    printf("%d",count);
}