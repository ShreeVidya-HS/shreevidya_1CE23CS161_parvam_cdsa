#include <stdio.h>  

int main() {  
    int num, rev=0, remainder;  
    printf("Enter an integer: ");  
    scanf("%d", &num);
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;

    }
    printf("reversed number%d",rev);
}