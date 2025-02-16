#include<stdio.h>
int main(){
    float real1=3.5,imag1=5.7;
    float real2 = 1.2, imag2 = 3.4;
    float realSum = real1 + real2;
    float imagSum = imag1 + imag2;
    printf("Sum: %.2f + %.2fi\n", realSum, imagSum);
    return 0;
}