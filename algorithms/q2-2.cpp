#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

// Randomized Search
int partition(int arr[], int low, int high) {
    // high element is the last element of the subarray as pivot:
    int pivot = arr[high]; 
    int i = low - 1;

    // array range of [low, high - 1]:
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int randomizedPartition(int arr[], int low, int high) {
    srand(time(NULL));

    // array range of [low, high]:
    int random = low + rand() % (high - low + 1);

    // swaps the index with high index randomly:
    swap(arr[random], arr[high]);

    // returns the modified array with partition array:
    return partition(arr, low, high);
}

// Randomized Search!!! (main and core)
// Start of randomized search for the fifth minimum element
int randomizedS(int arr[], int low, int high, int fifth) {

    // checks if the fifth is valid in the range of (1, high - low + 1):
    if (fifth > 0 && fifth <= high - low + 1) {
        int partitionIndex = randomizedPartition(arr, low, high);

        if (partitionIndex - low == fifth - 1) {
            return arr[partitionIndex];
        } else if (partitionIndex - low > fifth - 1) {
            return randomizedS(arr, low, partitionIndex - 1, fifth);
        } else {
            return randomizedS(arr, partitionIndex + 1, high, fifth - partitionIndex + low - 1);
        }
    }
    return -1; // If fifth element is invalid
}

int main() {
    // Given Array from the question:
    int A[] = {8, 6, 9, 4, 3, 1, 5, 2, 7}; 

    int n = sizeof(A) / sizeof(A[0]);
    
    int fifth = 5;

    int result = randomizedS(A, 0, n - 1, fifth);

    if (result != -1) {
        cout << "Randomized Search: The " << fifth << "th minimum element is " << result << endl;

    } else {
        cout << "Invalid fifth value!" << endl;
    }
    return 0;
}