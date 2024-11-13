
// Print fibo series of n terms

#include <stdio.h>
void print_fibonacci(int number) 
{
    int first = 0, second = 1, next;
    if (number <= 0) 
    {
        printf("Enter a positive integer greater than 0.\n");
        return;
    }

    printf("Fibonacci Series up to %d terms: \n", number);
    
    if (number == 1) 
    {
        printf("%d\n", first);
        return;
    }

    printf("%d, %d", first, second);

    for (int i = 3; i <= number; i++) 
    {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int number;
    printf("Enter the number of terms: ");
    scanf("%d", &number);
    print_fibonacci(number);
    return 0;
}
s