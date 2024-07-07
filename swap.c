#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
    int swap1, swap2;

    printf("Enter two numbers you want to swap:\n");
    scanf("%i%i", &swap1, &swap2);

    swap(&swap1, &swap2);

    printf("After swapping, a is now %i and b is now %i\n", swap1, swap2);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
