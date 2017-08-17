#include <stdlib.h>
#include <time.h>
#include "PokerGenerator.h"

int* PokerGenerator(int base, int top, int size) {
    int capacity=top-base+1;
    if(top<=base) exit(1);
    int *poker=(int*)malloc(sizeof(int)*capacity);
    for(int i=0; i<capacity; i++) poker[i]=i+base;
    srand(time(NULL));
    for(int i=0; i<(top-base+1); i++) {
        int index=rand()%capacity;
        int temp=poker[i];
        poker[i]=poker[index];
        poker[index]=temp;
    }
    int *chosen=(int*)malloc(sizeof(int)*size);
    for(int i=0; i<size; i++) chosen[i]=poker[i];
    free(poker);
    return chosen;
}
