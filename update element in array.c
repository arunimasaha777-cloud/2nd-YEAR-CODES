#include <stdio.h>

#define MAX 100   // maximum capacity of the array

int main() {
    int arr[MAX];
    int n, i, pos, newValue;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the current array
    printf("Current array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input the position (1-based) to update
    printf("Enter the position to update (1 to %d): ", n);
    scanf("%d", &pos);

    // Validate the position
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Input the new value
    printf("Enter the new value: ");
    scanf("%d", &newValue);

    // Update the element
    arr[pos - 1] = newValue;

    // Display the updated array
    printf("Array after update: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
