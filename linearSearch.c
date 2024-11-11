#include <stdio.h>
int main() {
    int arr[100];
    int size,elem,temp= -1;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &elem);
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) {
            temp = i;
            break; 
        }
    }
    if (temp != -1) {
        printf("Element found at index: %d\n",temp);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}