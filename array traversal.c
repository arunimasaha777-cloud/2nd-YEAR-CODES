#include <stdio.h>

int main() {
    // Declare and initialize an array
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    
    // Calculate the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Traverse the array using a for loop
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
