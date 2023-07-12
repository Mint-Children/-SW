#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 40

// 스택 구조체 정의
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// 스택 초기화
void initialize(Stack* stack) {
    stack->top = -1;
}

// 스택이 비어있는지 확인
bool isEmpty(Stack* stack) {
    return (stack->top == -1);
}

// 스택이 가득 찼는지 확인
bool isFull(Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}

// 스택에 데이터 삽입
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("스택이 가득 찼습니다.\n");
        return;
    }

    stack->top++;
    stack->items[stack->top] = value;
}

// 스택에서 데이터 삭제 및 반환
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("스택이 비어있습니다.\n");
        return -1;  // 오류 값
    }

    int poppedItem = stack->items[stack->top];
    stack->top--;

    return poppedItem;
}

// 스택의 맨 위 데이터 확인
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("스택이 비어있습니다.\n");
        return -1;  // 오류 값
    }
    return stack->items[stack->top];
}

int main() {
    Stack stack;
    initialize(&stack);

    char input;
    printf("식을 입력하세요: ");

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
                printf("잘못된 연산자 입니다.");
                return -1;
            }
        }
    }

    printf("결과: %d\n", peek(&stack));

    return 0;
}
