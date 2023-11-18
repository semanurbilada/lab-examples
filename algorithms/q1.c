#include <stdio.h>

// 1. Insertion Sort
int insertionSort(int arr[], int size) {
    printf("\nUnsorted array:\n");
    printArray(arr, size);

    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        printf("Pass %d: ", i);
        printArray(arr, size);
    }
    printf("Sorted array in ascending order:\n");
    printArray(arr, size);
}


// 2. Merge Sort
int merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Temporary arrays
    int L[n1], R[n2];

    // Data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Merge the temporary arrays back into arr[left...right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[] and R[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
int mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Same as (left + right) / 2
        int middle = left + (right - left) / 2;

        // Sort 
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Merge 
        merge(arr, left, middle, right);
    }
}


// 3a. Quicksort (select pivot as first element)
int partitionFirst(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (1) {
        while (i <= j && arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i <= j) {
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } else {
            // Swap arr[low] and arr[j]
            int temp = arr[low];
            arr[low] = arr[j];
            arr[j] = temp;
            return j;
        }
    }
}
int quicksortFirst(int arr[], int low, int high) {
    if (low < high) {
        // Find pivot that elements smaller than pivot are on the left, greater are on the right
        int partitionIndex = partitionFirst(arr, low, high);

        // Recursive sort the subarrays
        quicksortFirst(arr, low, partitionIndex - 1);
        quicksortFirst(arr, partitionIndex + 1, high);
    }
}


// 3b. Quicksort (select pivot as last element)
int partitionLast(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[i + 1] and arr[high] (pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}
int quicksortLast(int arr[], int low, int high) {
    if (low < high) {
        // Find pivot that elements smaller than pivot are on the left, greater are on the right
        int partitionIndex = partitionLast(arr, low, high);

        // Recursive sort the subarrays
        quicksortLast(arr, low, partitionIndex - 1);
        quicksortLast(arr, partitionIndex + 1, high);
    }
}


// 4. Counting Sort
int countingSort(int arr[], int size) {
    int max = 0;

    // Find the maximum element in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int count[max + 1];

    // Initialize count array with zeros
    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }
    // Update array with sorted values
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}