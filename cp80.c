#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;   // store value at x
    *x = *y;     // assign value at y to x
    *y = temp;   // assign stored value to y
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call swap function
    swap(&a, &b);

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
