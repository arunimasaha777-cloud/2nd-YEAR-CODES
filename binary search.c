#include <stdio.h>

// Iterative binary search
// Returns index of key if found, otherwise -1
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;   // avoids overflow

        if (arr[mid] == key)
            return mid;                 // element found
        else if (arr[mid] < key)
            low = mid + 1;              // search right half
        else
            high = mid - 1;             // search left half
    }
    return -1;                          // element not found
}

int main() {
    int arr[100], n, key, pos;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter %d elements in SORTED order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform binary search
    pos = binarySearch(arr, n, key);

    // Display the result
    if (pos != -1)
        printf("Element %d found at position %d (index %d).\n", key, pos + 1, pos);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
