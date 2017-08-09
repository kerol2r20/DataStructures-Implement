#include<stdio.h>
#include"dynamicarray.h"

int main() {
  DynamicArray *x = makeDynamicArray();
  for(int i=0; i<1000; i++) {
    insertItem(&x, i);
  }
  for(int i=0; i<x->size; i++) {
    printf("%d\n", x->arr[i]);
  }
  return 1;
}
