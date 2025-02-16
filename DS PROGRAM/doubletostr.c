// C Program to demonstrate Double to String Conversion 
#include <stdio.h> 
  
int main() 
{ 
    double n = 456321.7651234; 
    char str[100]; 
    sprintf(str, "%f", n); 
    printf("the string is: %s\n", str); 
    return 0; 
}