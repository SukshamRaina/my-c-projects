#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr1, *arr2;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Using malloc
    arr1 = (int *)malloc(n * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed using malloc.\n");
        return 1;
    }
    printf("Memory allocated using malloc.\n");
    for (i = 0; i < n; i++) {
        arr1[i] = i + 1;
    }
    printf("Array elements using malloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Using calloc
    arr2 = (int *)calloc(n, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed using calloc.\n");
        free(arr1); // Free memory allocated by malloc
        return 1;
    }
    printf("Memory allocated using calloc.\n");
    for (i = 0; i < n; i++) {
        arr2[i] = (i + 1) * 2;
    }
    printf("Array elements using calloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Freeing the memory
    free(arr1);
    free(arr2);
    printf("Memory freed.\n");

    return 0;
}