#include <iostream>
#include <algorithm>

using namespace std;

// Binary Search
int binaryS(int array[], int n, int fifth) {
    sort(array, array + n);

    // Start of binary search for the fifth minimum element
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == fifth) {
            return array[mid];
        } else if (array[mid] < fifth) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // If fifth element isn't found in the array
}

int main() {
    int A[] = {8, 6, 9, 4, 3, 1, 5, 2, 7}; // requested Array from the question

    int n = sizeof(A) / sizeof(A[0]);
    
    int fifth = 5;

    int result = binaryS(A, n, fifth);

    if (result != -1) {
        cout << "Binary Search: The " << fifth << "th minimum element is " << result << endl;

    } else {
        cout << "Invalid fifth value!" << endl;
    }
    return 0;
}