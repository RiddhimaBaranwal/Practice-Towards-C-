#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    // Declare a variable named 'input_string' to hold our input.
    char inpt_str[100]; 
    // Read a full line of input from stdin and save it to our variable, input_string.
    scanf("%[^\n]",inpt_str); 
    // Print a string literal saying "Hello, World." to stdout using printf.
    printf("Hello, World.\n");
    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    printf("%s",inpt_str);
    return 0;
}
