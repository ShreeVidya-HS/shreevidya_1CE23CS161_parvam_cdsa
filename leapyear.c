#include <stdio.h>
#include <stdlib.h>

int main() {
    int yr;
    printf("Enter a year: ");
    scanf("%d", &yr);
    
    // Check for leap year conditions
    if ((yr%400 == 0) || (yr%4== 0 && yr % 100 != 0)) {
        printf("%d is a leap year!\n", yr);
    } else {
        printf("%d is not a leap year!\n", yr);
    }

    return 0;
}
