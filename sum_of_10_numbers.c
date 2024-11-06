#include <stdio.h>  
int sum = 0, i;  
void forloop() {  
    for(i = 1; i <= 10; i++) {  
        sum+i;        
    }  
    printf("Sum = %d\n", sum);  
}  

void whileloop() {  
    i = 0;  
    while(i < 10) {  
        printf("%d ", i);  
        i++;  
    }  
    printf("\n");  
}  

int main() {  
    int choice;  
    
    printf("Enter choice (1 for for loop, 2 for while loop): ");  
    scanf("%d", &choice); 
    
    switch(choice) {  
        case 1:  
            forloop();  
            break;  
        case 2:  
            whileloop();  
            break;  
        default:  
            printf("Invalid choice!\n");  
            break;  
    }  

    return 0;  
} 