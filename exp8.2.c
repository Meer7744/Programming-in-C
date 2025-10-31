#include <stdio.h>

// Global variable
int globalVar = 50;

void myFunction() {
    // Local variable
    int localVar = 20;

    printf("Inside function:\n");
    printf("Local variable = %d\n", localVar);    // Accessible here
    printf("Global variable = %d\n", globalVar);  // Accessible here
}

int main() {
    myFunction();

    // Trying to access local variable outside its function
    // printf("Outside function: Local variable = %d\n", localVar); // ERROR!

    // Accessing global variable outside the function
    printf("Outside function: Global variable = %d\n", globalVar); // Works fine

    return 0;
}
