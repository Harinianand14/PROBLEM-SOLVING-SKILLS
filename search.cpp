#include <stdio.h>

int main() {
    int arr[] = {12, 34, 1, 5, 8, 60};
    int n = sizeof(arr) / sizeof(arr[0]); // size of the array
    int x = 5; // number to search for
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) { // if element is found
            printf("Element found at index %d\n", i);
            break;
        }
    }
    if (i == n) { // if element is not found
        printf("Element not found in the array.\n");
    }
    return 0;
}
