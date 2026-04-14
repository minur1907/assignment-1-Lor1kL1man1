#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
TASK 5: Command Line
Goal: Use argc/argv.
*/

int main(int argc, char *argv[]) {
    // TODO 1: check argc
    // Expected: program_name, operation, num1, num2
    if (argc != 4) {
        printf("Usage: ./cmd <operation> <num1> <num2>\n");
        printf("Operations: add, sub, mul, div\n");
        return 1;
    }

    // TODO 2: parse operation and numbers
    char *op = argv[1];
    long a = strtol(argv[2], NULL, 10);
    long b = strtol(argv[3], NULL, 10);

    // TODO 3-5: implement operations
    if (strcmp(op, "add") == 0) {
        printf("%ld\n", a + b);
    }
    else if (strcmp(op, "sub") == 0) {
        printf("%ld\n", a - b);
    }
    else if (strcmp(op, "mul") == 0) {
        printf("%ld\n", a * b);
    }
    else if (strcmp(op, "div") == 0) {
        // Handle division by zero
        if (b == 0) {
            printf("Error: Division by zero.\n");
            return 1;
        }
        printf("%ld\n", a / b);
    }
    else {
        // Unknown operation
        printf("Unknown operation: %s\n", op);
        return 1;
    }

    return 0;
}
