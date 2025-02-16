#include <stdio.h>
#include <stdlib.h>

// Function to convert a binary string to an integer
int binaryToDecimal(char* binary) {
    int decimal = 0;
    while (*binary != '\0') {
        decimal = decimal * 2 + (*binary - '0');
        binary++;
    }
    return decimal;
}

// Function to convert an integer to a binary string
void decimalToBinary(int n, char* binary) {
    int i = 0;
    while (n > 0) {
        binary[i++] = (n % 2) + '0';
        n = n / 2;
    }
    binary[i] = '\0';
    
    // Reverse the binary string
    for (int j = 0; j < i / 2; j++) {
        char temp = binary[j];
        binary[j] = binary[i - j - 1];
        binary[i - j - 1] = temp;
    }
}

int main() {
    char a[] = "1101";  // Example binary string
    char b[] = "1011";  // Example binary string

    // Convert binary strings to decimal (integer)
    int num1 = binaryToDecimal(a);
    int num2 = binaryToDecimal(b);

    // Add the numbers
    int sum = num1 + num2;

    // Convert the sum back to binary
    char result[50];
    decimalToBinary(sum, result);

    printf("Sum of %s and %s is %s\n", a, b, result);

    return 0;
}
