#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Randomized Partition
int randomizedPartition(int arr[], int low, int high) {
    srand(time(NULL));
    int random = low + rand() % (high - low + 1);
    int temp = arr[random];
    arr[random] = arr[high];
    arr[high] = temp;

    int pivot = arr[high];
    int i = low - 1;
    
    int j;
    for (j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            // Swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[i + 1] and arr[high] (pivot)
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Randomized Quicksort
void randomizedQuickSort(int arr[], int low, int high) {
    if (low < high) {
        int partitionIndex = randomizedPartition(arr, low, high);

        // Recursive sort the elements before and after partition
        randomizedQuickSort(arr, low, partitionIndex - 1);
        randomizedQuickSort(arr, partitionIndex + 1, high);
    }
}

int main() {
    // Generate given two random arrays
    int array1[15000];
    int array2[100000];
    int i;
    for (i = 0; i < 15000; i++) {
        array1[i] = rand();
    }

    for (i = 0; i < 100000; i++) {
        array2[i] = rand();
    }
    // Sort the arrays using randomized quicksort and measure time
    clock_t start, end;
    double cpu_time_used;

    // Sort array1
    start = clock();
    randomizedQuickSort(array1, 0, 14999);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to sort array1: %f seconds\n", cpu_time_used);

    // Sort array2
    start = clock();
    randomizedQuickSort(array2, 0, 99999);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to sort array2: %f seconds\n", cpu_time_used);

    // Save the sorted arrays to text files
    FILE *file1 = fopen("A15.txt.txt", "w");
    FILE *file2 = fopen("A100.txt.txt", "w");

    if (file1 != NULL && file2 != NULL) {
    	int i;
        for (i = 0; i < 15000; i++) {
            fprintf(file1, "%d\n", array1[i]);
        }

        for (i = 0; i < 100000; i++) {
            fprintf(file2, "%d\n", array2[i]);
        }
        fclose(file1);
        fclose(file2);

        printf("Sorted arrays saved to 'A15.txt' and 'A100.txt'\n");
    } else {
        printf("Error opening files for writing.\n");
    }
    return 0;
}