#include <stdio.h>  

int main() {  
    int  num,rev=0, rem,og;  
    printf("Enter an integer: ");  
    scanf("%d", &num);
    og=num;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;

    }
    if(rev==og){
        printf("palindrome!\n");

    }
    else{
        printf("not a palindrome! \n");
    }

}

