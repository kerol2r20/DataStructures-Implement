typedef struct StackArray {
    int top;
    int capacity;
    int *arr;
} StackArray;

StackArray* createStackArray(int size);

int isFull(StackArray *stack);

int isEmpty(StackArray *stack);

void push(StackArray *stack, int item);

int pop(StackArray *stack);
