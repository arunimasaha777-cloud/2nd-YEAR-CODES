#include <stdio.h>

#define MAX 100

int main() {
    int arr1[MAX], arr2[MAX], merged[2 * MAX];
    int n1, n2, i, k = 0;

    // Input first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // Input second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    // Copy elements of first array
    for (i = 0; i < n1; i++)
        merged[k++] = arr1[i];

    // Copy elements of second array
    for (i = 0; i < n2; i++)
        merged[k++] = arr2[i];

    // Display merged array
    printf("Merged array: ");
    for (i = 0; i < k; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
