/* Implement below pseudocode in C;

    MAX-HEAPIFY (A, i)
    l = LEFT(i)
    r = RIGHT(i)
    if l <= A.heap-size and A[I]> A[i]
    largest = 1
    else largest = i
    if r <= A.heap-size and A[r] > A[largest]
    largest = r
    if largest != i
        exchange A[i] with A[largest]
        MAX-HEAPIFY (A, largest)

Show your work with an example!? */
#include <stdio.h>
#define MAX_SIZE 100

//calculations for left child
int LEFT(int i) {
    return 2 * i;
}

//calculations for right child
int RIGHT(int i) {
    return 2 * i + 1;
}

void MAX_HEAPIFY(int A[], int i, int heap_size) {
    //left and right child declarations
    int l = LEFT(i);
    int r = RIGHT(i);
    int largest;

    if (l <= heap_size && A[l] > A[i]) {
        largest = l;
    } else {
        largest = i;
    }

    if (r <= heap_size && A[r] > A[largest]) {
        largest = r;
    }

    if (largest != i) {
        int tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        MAX_HEAPIFY(A, largest, heap_size);
    }
}

int main() {
    int A[MAX_SIZE] = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};
    int heap_size = 10;
    int i;

    printf("Before MAX-HEAPIFY:\n");
    for (i = 0; i < heap_size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    MAX_HEAPIFY(A, 1, heap_size);

    printf("After MAX-HEAPIFY:\n");
    for (i = 0; i < heap_size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
/*
// implementation;
void max_heapify(int A[], int i, int heap_size) {
    int l = LEFT(i);
    int r = RIGHT(i);
    int largest;

    if (l <= heap_size && A[l] > A[i]) {
        largest = l;
    } else {
        largest = i;
    }

    if (r <= heap_size && A[r] > A[largest]) {
        largest = r;
    }

    if (largest != i) {
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
        max_heapify(A, largest, heap_size);
    }
} */