#include <stdio.h>  
#include <string.h>  

#define MAX_STRINGS 100  
#define MAX_LENGTH 100  

int main() {  
    char strings[MAX_STRINGS][MAX_LENGTH];  
    int n;  

    printf("Enter the number of strings (up to %d): ", MAX_STRINGS);  
    scanf("%d", &n);  

    printf("Enter %d strings:\n", n);  
    for (int i = 0; i < n; i++) {  
        scanf("%s", strings[i]);  
    }  

    qsort(strings, n, sizeof(strings[0]), strcmp);  

    printf("\nSorted strings in alphabetical order:\n");  
    for (int i = 0; i < n; i++) {  
        printf("%s\n", strings[i]);  
    }  

    return 0;  
}