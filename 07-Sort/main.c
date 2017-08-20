#include <stdio.h>
#include <stdlib.h>
#include "../06-PokerGenerator/PokerGenerator.h"
#include "Sort.h"

void demo(int *arr, int len) {
    for(int i=0; i<len; i++) {
        printf("%4d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int len=10;

    // Bubble Sort
    int *unsort=PokerGenerator(1, 99, len);
    printf("Bubble sort\n");
    printf("Unsort: ");
    demo(unsort, len);
    BubbleSort(unsort, len);
    printf("Sorted: ");
    demo(unsort, len);
    printf("\n");
    free(unsort);

    // Insertion Sort
    unsort=PokerGenerator(1, 99, len);
    printf("Insertion sort\n");
    printf("Unsort: ");
    demo(unsort, len);
    InsertionSort(unsort, len);
    printf("Sorted: ");
    demo(unsort, len);
    printf("\n");
    free(unsort);

    // Selection Sort
    unsort=PokerGenerator(1, 99, len);
    printf("Selection sort\n");
    printf("Unsort: ");
    demo(unsort, len);
    SelectionSort(unsort, len);
    printf("Sorted: ");
    demo(unsort, len);
    printf("\n");
    free(unsort);

    // Selection Sort
    unsort=PokerGenerator(1, 99, len);
    printf("Quick sort\n");
    printf("Unsort: ");
    demo(unsort, len);
    QuickSort(unsort, 0, len-1);
    printf("Sorted: ");
    demo(unsort, len);
    printf("\n");
    free(unsort);

    // Selection Sort
    unsort=PokerGenerator(1000, 9999, len);
    printf("LSD sort\n");
    printf("Unsort: ");
    demo(unsort, len);
    LSD(unsort, len, 4);
    printf("Sorted: ");
    demo(unsort, len);
    printf("\n");
    free(unsort);

    return 0;
}