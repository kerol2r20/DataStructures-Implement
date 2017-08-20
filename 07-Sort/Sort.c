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
