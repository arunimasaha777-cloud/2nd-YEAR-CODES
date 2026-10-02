#include <stdio.h>

int main() {
    int arr[100];
    int n, i, key, found = 0, pos = -1;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            pos = i;
            break;   // stop at first occurrence
        }
    }

    // Display the result
    if (found)
        printf("Element %d found at position %d (index %d).\n", key, pos + 1, pos);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
