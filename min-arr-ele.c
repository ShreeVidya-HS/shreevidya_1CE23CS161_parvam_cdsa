#include<stdio.h>
int main(){
    int n,temp;
    printf("enter the number of eements: ");
    scanf("%d",&n);
    int arr[5];
    printf("enter the elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    temp=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<temp){
           temp=arr[i];
        }
    }
    printf("min: %d",temp);
    return 0;  
}