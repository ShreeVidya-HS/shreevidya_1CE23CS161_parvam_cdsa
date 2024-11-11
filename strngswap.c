#include <stdio.h>  

int main() {  
    char str1[] = "vidya";  
    char str2[] = "shree";  
    char temp;  

    printf("Before swapping:\n");  
    printf("String 1: %s\n", str1);  
    printf("String 2: %s\n", str2);  

    for (int i = 0; i < 5; i++) {  
        temp = str1[i];  
        str1[i] = str2[i];  
        str2[i] = temp;  
    }  

    printf("After swapping:\n");  
    printf("String 1: %s\n", str1);  
    printf("String 2: %s\n", str2);  

    return 0;  
}