#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int* ptr=a;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        printf("%d\t",*ptr);
        ptr++;
    }
    printf("\nthe size of the array is: %d",n);
    return 0;
}