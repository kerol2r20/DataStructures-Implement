#include <stdio.h>
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
    int *unsort=PokerGenerator(1, 100, len);
    printf("Unsort: ");
    demo(unsort, len);
    BubbleSort(unsort, len);
    printf("Sorted: ");
    demo(unsort, len);
    return 0;
}