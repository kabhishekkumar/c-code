#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for  array
    arr = (int *)malloc(n * sizeof(int));

    // Check if  dynemic memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error code
    }

    // Input elements from the user and calculate the sum
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Print the sum
    printf("Sum of elements: %d\n", sum);

    // Free dynamically allocated memory
    free(arr);

    return 0; // Exit success
}