#include <stdio.h>

#define SIZE 5 // Define stack size

int stack[SIZE]; // Global stack array
int top = -1; // Initialize top

void push()
{
    int x;

    if (top >= SIZE - 1) // Correct overflow check
    {
        printf("Stack Overflow\n");
        return;
    }

    else{

    printf("Enter data: ");
    scanf("%d", &x);
    
    top = top + 1; // Move top first
    stack[top] = x; // Store value
    printf("Data pushed into stack\n");
    }
}

int main()
{
    push();
    
    return 0;
}
