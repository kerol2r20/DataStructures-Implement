typedef struct DynamicArray{
  int capacity;
  int size;
  int *arr;
} DynamicArray;

DynamicArray* makeDynamicArray();

void insertItem(DynamicArray*, int);

void removeItem(DynamicArray*, int);
