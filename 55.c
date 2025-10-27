#include <stdio.h>
int main() {

    FILE *ptr;
    ptr = fopen("file2.txt", "r");

    if (ptr == NULL) {
        printf("File not found!");
        return 1;
    }

    int ch;     // <-- changed here
    ch = fgetc(ptr);

    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(ptr);
    }

    fclose(ptr);
    return 0;
}