#include<stdio.h>
#include<string.h>
int main(){
    int n,rem=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        rem=rem+(n%10);
        n/=10;
    }
    printf("\nsum of the number is: %d\n",rem);
    return 0;
}