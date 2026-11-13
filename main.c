#include <stdio.h> // This is the standard library that allows printing to the screen

int main(void) {
    // 1. Choose how long you want the sequence to be
    int count = 50;
    // 2. Create a list (array) of 50 slots using 'unsigned long long' 
    //    so the numbers don't run out of space when they get giant.
    unsigned long long fib[50];

    // 3. Set the first two starting rules of Fibonacci
    fib[0] = 0; 
    fib[1] = 1; 

    // 4. Loop (repeat) starting at position 2 all the way up to 50
    for (int i = 2; i < count; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // 5. Print out the full list nicely line by line
    printf("Here is the long Fibonacci sequence (first %d numbers):\n\n", count);
    
    for (int i = 0; i < count; i++) {
        // %2d spaces out the index numbers cleanly, and %llu prints the giant value
        printf("Index %2d: %llu\n", i, fib[i]);
    }

    return 0;
}