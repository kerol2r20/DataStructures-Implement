#include <stdio.h>
#include <stdlib.h>
#include "../06-PokerGenerator/PokerGenerator.h"
#include "Sort.h"

void demo(int *arr, int len) {
    for(int i=0; i<len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int len=10;

    // Bubble Sort
    int *unsort=PokerGenerator(1, 100, len);
    printf("Bubble sort\n");
    printf("Unsort: ");
    demo(unsort, len);
    BubbleSort(unsort, len);
    printf("Sorted: ");
    demo(unsort, len);
    printf("\n");
    free(unsort);

    // Insertion Sort
    unsort=PokerGenerator(1, 100, len);
    printf("Insertion sort\n");
    printf("Unsort: ");
    demo(unsort, len);
    InsertionSort(unsort, len);
    printf("Sorted: ");
    demo(unsort, len);
    printf("\n");
    free(unsort);

    return 0;
}