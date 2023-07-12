#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 40

// ���� ����ü ����
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// ���� �ʱ�ȭ
void initialize(Stack* stack) {
    stack->top = -1;
}

// ������ ����ִ��� Ȯ��
bool isEmpty(Stack* stack) {
    return (stack->top == -1);
}

// ������ ���� á���� Ȯ��
bool isFull(Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}

// ���ÿ� ������ ����
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("������ ���� á���ϴ�.\n");
        return;
    }

    stack->top++;
    stack->items[stack->top] = value;
}

// ���ÿ��� ������ ���� �� ��ȯ
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("������ ����ֽ��ϴ�.\n");
        return -1;  // ���� ��
    }

    int poppedItem = stack->items[stack->top];
    stack->top--;

    return poppedItem;
}

// ������ �� �� ������ Ȯ��
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("������ ����ֽ��ϴ�.\n");
        return -1;  // ���� ��
    }
    return stack->items[stack->top];
}

int main() {
    Stack stack;
    initialize(&stack);

    char input;
    printf("���� �Է��ϼ���: ");

    while ((input = getchar()) != '\n') {
        if (input >= '0' && input <= '9') {
            push(&stack, input - '0');
        }
        else if (input == '+' || input == '-' || input == '*' || input == '/') {
            int operand1 = pop(&stack);
            int operand2 = pop(&stack);
            switch (input)
            {
            case '+' :
                push(&stack, operand1 + operand2);
                break;
            case '-' :
                push(&stack, operand1 - operand2);
                break;
            case '*' :
                push(&stack, operand1 * operand2);
                break;
            case '/':
                push(&stack, operand1 / operand2);
                break;
            default:
                printf("�߸��� ������ �Դϴ�.");
                return -1;
            }
        }
    }

    printf("���: %d\n", peek(&stack));

    return 0;
}
