#include <stdio.h>
#define SIZE 10
int stack[SIZE];
int top = -1;
void push(int value){
    if (top == SIZE-1 ) {
        printf("overflow");
    } else {
        top ++ ;
        stack [top] = value;
        printf("pushed to stack " , value);
    }

}
void pop(){
    if (top == -1 ){
        printf("underflow");
    } else {
        printf("removed %d" , stack[top]);
        top --;
    }
}

void peek() {
    (top == -1 ) ? printf("stack is empty") : printf("Top element: %d\n", stack[top]);
}
void display() {
    for (int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1.Push  2.Pop  3.Peek  4.Display  5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
