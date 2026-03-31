#include <stdio.h>

/*
TASK 1: Data Types
Goal: Practice basic C types and printing.

TODOs:
1) Print the size (in bytes) of:
   - int, long, long long, float, double, char
2) Ask the user for:
   - age (int)
   - height in meters (double)
   - first letter of their name (char)
3) Print the values back in a nice sentence.

Hints:
- Use sizeof(type)
- Use scanf carefully:
  - int: %d
  - double: %lf
  - char: " %c" (notice space before %c to skip newline)
*/

int main(void) {
    // TODO 1: Print sizes
    printf("=== Sizes of Data Types (bytes) ===\n");
    // Example:
    // printf("int: %zu\n", sizeof(int));
   printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("char: %zu\n", sizeof(char));

    // TODO: print all required sizes here

    // TODO 2: Read input from user
    int age = 0;
    double height = 0.0;
    char firstLetter = '?';

    printf("\nEnter your age: ");
   scanf("%d", &age);
    // TODO: scanf for age

    printf("Enter your height in meters (e.g., 1.72): ");
   scanf("%lf", &height);
    // TODO: scanf for height

    printf("Enter the first letter of your name: ");
   scanf(" %c", &firstLetter);
    // TODO: scanf for firstLetter (use " %c")

    // TODO 3: Print summary
    printf("\n=== Summary ===\n");
   printf("You are %d years old, %.2lf meters tall, and your name starts with '%c'.\n",
           age, height, firstLetter);
    // TODO: print a sentence using age, height, firstLetter

    return 0;
}
