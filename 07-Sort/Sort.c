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

void SelectionSort(int *unsort, int len) {
    for(int i=0; i<len; i++) {
        int MinIndex=i;
        for(int j=i+1; j<len; j++) {
            if(unsort[j]<unsort[MinIndex]) {
                MinIndex=j;
            }
        }
        int temp=unsort[i];
        unsort[i]=unsort[MinIndex];
        unsort[MinIndex]=temp;
    }
}

void QuickSort(int *unsort, int left, int right) {
    if(left<right) {
        int i=left, j=right+1;
        int pivote=unsort[i];
        do {
            for(i=i+1; unsort[i]<pivote; i++);
            for(j=j-1; unsort[j]>pivote; j--);
            if(i<j) {
                int temp=unsort[i];
                unsort[i]=unsort[j];
                unsort[j]=temp;
            }
        } while(i<j);
        int temp=unsort[left];
        unsort[left]=unsort[j];
        unsort[j]=temp;
        QuickSort(unsort, left, j-1);
        QuickSort(unsort, j+1, right);
    }
}
