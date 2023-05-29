#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef struct {
    int top;
    int data[MAX_STACK_SIZE];
} Stack;

void push(Stack* stack, int value)
{
    if (stack->top < MAX_STACK_SIZE)
        {
        stack->data[stack->top++] = value;
        }
}

int pop(Stack* stack)
{
    if (stack->top > 0)
    {
       return stack->data[--stack->top];
    }
    return -1; // return -1 when the stack is empty
}

int main()
{
    FILE* inputFile = fopen("input.txt", "r");
    FILE* outputFile = fopen("output.txt", "w");
    Stack stack;
    stack.top = 0;
    char line[100];
    while (fgets(line, sizeof(line), inputFile))
        {
        int value = atoi(line);
        push(&stack, value);
        }
    fclose(inputFile);
    while (stack.top > 0)
    {
        int value = pop(&stack);
        fprintf(outputFile, "%d\n", value * 2);
    }
    fclose(outputFile);
    return 0;
}