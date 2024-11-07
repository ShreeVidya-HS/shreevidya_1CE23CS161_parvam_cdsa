#include <stdio.h>  

// Function to calculate factorial using for loop  
int forloop() {  
    int i, fact = 1, n; // Declare all variables  
    printf("Enter a number to find factorial: "); // Corrected the message  
    scanf("%d", &n);  
    
    // Handle the case where n is negative  
    if(n < 0) {  
        printf("Please enter a positive number.\n");  
        return 0; 
    }  

    for(i = 1; i <= n; i++) {  
        fact = fact * i; 
    }  
    printf("\nFactorial of %d: %d\n", n, fact);   
    return 0;  
} 
int ifs() {  
    int n, fact = 1, i = 1; // Declare variables and initialize i  
    printf("Enter a number to find factorial: "); // Corrected the message  
    scanf("%d", &n);  
    
    // Handle the case where n is negative  
    if(n < 0) {  
        printf("Please enter a positive number.\n");  
        return 0; 
    }  

    while(i <= n) { // Loop until i reaches n  
        fact = fact * i; // Calculate factorial  
        i++; // Increment i  
    }  
    printf("\nFactorial of %d: %d\n", n, fact);   
    return 0;  
}  

int main() {  
    int ch; // Declare variable for choice  
    printf("Enter your choice (1 for For Loop / 2 for While Loop): ");  
    scanf("%d", &ch); // Add '&' to read input into ch  

    switch (ch) {  
    case 1:  
        forloop(); // Call forloop function  
        break;  

    case 2:  
        ifs(); // Call ifs function  
        break;  

    default:  
        printf("Invalid choice. Please select 1 or 2.\n"); // Handle invalid choices  
        break;  
    }  

    return 0; // Return from main function  
}