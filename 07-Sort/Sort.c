#include "Sort.h"

void BubbleSort(int *unsort, int len){
    for(int i=0; i<len-1; i++) {
        for(int j=0; j<len-1-i; j++) {
            if(unsort[j]>unsort[j+1]) {
                int temp=unsort[j];
                unsort[j]=unsort[j+1];
                unsort[j+1]=temp;
            }
        }
    }
}

void InsertionSort(int *unsort, int len) {
    for(int i=1; i<len; i++) {
        int pivote=unsort[i];
        for(int j=i-1; j>=0 && unsort[j]>pivote; j--) {
            unsort[j+1]=unsort[j];
            unsort[j]=pivote;
        }
    }
}
