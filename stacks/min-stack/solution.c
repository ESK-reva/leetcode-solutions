#include <stdio.h>
#include <limits.h>

#define MAX 30000

typedef struct {
    int values[MAX];
    int mins[MAX];
    int top;
} MinStack;

void minStackCreate(MinStack* obj) {
    obj->top = -1;
}

void minStackPush(MinStack* obj, int val) {

    obj->top++;

    obj->values[obj->top] = val;

    if (obj->top == 0) {
        obj->mins[obj->top] = val;
    }
    else {
        if (val < obj->mins[obj->top - 1]) {
            obj->mins[obj->top] = val;
        }
        else {
            obj->mins[obj->top] = obj->mins[obj->top - 1];
        }
    }
}

void minStackPop(MinStack* obj) {
    obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->values[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->mins[obj->top];
}

int main() {

    MinStack stack;

    minStackCreate(&stack);

    // Test Case 1 - Typical case
    minStackPush(&stack, -2);
    minStackPush(&stack, 0);
    minStackPush(&stack, -3);

    printf("Test Case 1 - getMin: %d\n",
           minStackGetMin(&stack));

    minStackPop(&stack);

    printf("Test Case 1 - top: %d\n",
           minStackTop(&stack));

    printf("Test Case 1 - getMin after pop: %d\n",
           minStackGetMin(&stack));


    // Test Case 2 - Edge case
    MinStack stack2;

    minStackCreate(&stack2);

    minStackPush(&stack2, 5);

    printf("Test Case 2 - getMin: %d\n",
           minStackGetMin(&stack2));

    minStackPop(&stack2);

    return 0;
}