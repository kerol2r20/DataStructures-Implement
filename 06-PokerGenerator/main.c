#include <stdio.h>
#include "PokerGenerator.h"

int main () {
    int *x=PokerGenerator(1000, 9999, 15);
    for(int i=0; i<15; i++) {
        printf("%d ", x[i]);
    }
    return 0;
}