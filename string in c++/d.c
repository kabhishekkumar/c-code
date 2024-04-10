#include <stdio.h>

int main() {
    int arr[100]; // Assuming array size is 100
    int n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Finding the maximum value
    int max = arr[0]; // Assuming first element is the maximum
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Maximum value in the array is: %d\n", max);
    
   
}
