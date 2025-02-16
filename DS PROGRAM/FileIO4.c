#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");  

    if (file == NULL) {
        printf("Error!\n");
        return 1;
    }

    printf("Successfull\n");
    fclose(file);  
    return 0;
}
