#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

void LSD(int *unsort, int len, int maxdigit) {
    for(int i=1; i<=maxdigit; i++) {
        int bucket[10][10]={-1};
        int top[10]={0};
        int base=pow(10, i-1);
        for(int j=0; j<len; j++) {
            int lsd=unsort[j]/base%10;
            if(top[lsd]+1>9) {
                fprintf(stderr, "Overflow\n");
                exit(1);
            }
            bucket[lsd][top[lsd]++]=unsort[j];
        }
        int temp=0;
        for(int j=0; j<10; j++) {
            for(int k=0; k<top[j]; k++) {
                unsort[temp++]=bucket[j][k];
            }
        }
    }
}

int* MergeSort(int *unsort, int left, int right) {
	int *sorted=(int*) malloc(sizeof(int)*(right-left+1));
	if(left==right){
		sorted[0]=unsort[left];
	}
	else {
		int mid=(left+right)/2;
		int LSize=(mid-left+1);
		int RSize=(right-mid);
		int *LSorted=MergeSort(unsort, left, mid);
		int *RSorted=MergeSort(unsort, mid+1, right);
		int i=0, j=0, z=0;
		while(i<LSize && j<RSize) {
			if(LSorted[i]<=RSorted[j]) {
				sorted[z++]=LSorted[i++];
			}
			else {
				sorted[z++]=RSorted[j++];
			}
		}
		while(i<LSize) {
			sorted[z++]=LSorted[i++];
		}
		while(j<RSize) {
			sorted[z++]=RSorted[j++];
		}
		free(LSorted);
		free(RSorted);
	}
	return sorted;
}
