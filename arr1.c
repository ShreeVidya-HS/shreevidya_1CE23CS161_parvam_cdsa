#include<stdio.h>
int main(){
    int arr[]={1,1,1,1,1};
    
    int sum=0;
    for(int i=0;i<=4;i++){
        printf("%d\n",arr[i]);
        arr[i]+=5;
    sum+=arr[i];
    }
    printf("sum: %d",sum);
    return 0;
}