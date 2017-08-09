#include<stdlib.h>
#include"dynamicarray.h"

DynamicArray* makeDynamicArray() {
  DynamicArray *da = malloc(sizeof(DynamicArray));
  da->capacity = 1;
  da->size = 0;
  da->arr = malloc(sizeof(int)*da->capacity);
  return da;
}

void insertItem(DynamicArray* da, int item){
  if(da->size+1 > da->capacity) {
    int *temp = malloc(sizeof(int)*2*da->capacity);
    da->capacity *= 2;
    for(int i=0; i < da->size; i++) {
      temp[i] = da->arr[i];
    }
    free(da->arr);
    da->arr = temp;
  }
  da->arr[da->size++] = item;
}

void removeItem(DynamicArray *da, int position) {
  int *temp = malloc(sizeof(int)*da->capacity);
  for(int i=0; i<position; i++) {
    temp[i] = da->arr[i];
  }
  for(int i=position; i< da->size; i++) {
    temp[i] = da->arr[i+1];
  }
  free(da->arr);
  da->size--;
  da->arr = temp;
}
