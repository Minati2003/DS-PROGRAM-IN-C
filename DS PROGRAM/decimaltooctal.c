// C program to convert decimal  number to octal number 
#include <stdio.h>
void decToOctal(int n) 
{ 
    int octalNum[100]; 
    int i=0;
    while (n != 0) { 
        octalNum[i] = n % 8; 
        n = n / 8; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        printf("%d", octalNum[j]); 
} 
int main() 
{ 
    int n = 33; 
    decToOctal(n); 
  
    return 0; 
}