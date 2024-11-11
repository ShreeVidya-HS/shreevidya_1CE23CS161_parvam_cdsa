#include<stdio.h>
int main(){
    int max=0,n,arr[5];
    printf("enter the number of eements: ");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
           max=arr[i];
        }
    }
    printf("max: %d",max);
    return 0;  
}