// C program to append the contents of source file to the destination file including header files
#include <stdio.h>
void appendFiles(char source[],char destination[])
{
    FILE *fp1, *fp2;
    fp1 = fopen(source, "a+");
    fp2 = fopen(destination, "a+");
    if (!fp1 && !fp2) {
        printf("Unable to open/"
               "detect file(s)\n");
        return;
    }
 
    char buf[100];
    fprintf(fp2, "\n");
    while (!feof(fp1)) {
        fgets(buf, sizeof(buf), fp1);
        fprintf(fp2, "%s", buf);
    }
 
    rewind(fp2);
    while (!feof(fp2)) {
        fgets(buf, sizeof(buf), fp2);
        printf("%s", buf);
    }
}
int main()
{
    char source[] = "file1.txt",
         destination[] = "file2.txt";
    appendFiles(source, destination);
 
    return 0;
}