#include <stdio.h>

#define SIZE 20

void findDuplicates(int arr[], int size) {
    int i, j;
    int freq[SIZE] = {0};

    // Count the frequency of each element
    for (i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Print the duplicate elements and their frequencies
    printf("Duplicate elements and their frequencies:\n");
    for (i = 0; i < SIZE; i++) {
        if (freq[i] > 1) {
            printf("%d: %d\n", i, freq[i]);
        }
    }
}

int main() {
    FILE *file;
    int arr[SIZE];
    int i;

    // Open the file
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Read the array from the file
    for (i = 0; i < SIZE; i++) {
        fscanf(file, "%d", &arr[i]);
    }

    // Close the file
    fclose(file);

    // Find and print the duplicate elements
    findDuplicates(arr, SIZE);

    return 0;
}
