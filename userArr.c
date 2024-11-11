#include<stdio.h>
int main(){
    int n,i, arr[10];
    printf("enter the number of array: ");
    scanf("%d",&n);
    printf("enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d\t",arr[i]);
    }
    printf("the array lements are ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}