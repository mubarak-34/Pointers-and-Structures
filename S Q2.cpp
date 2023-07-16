#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char text[] = "Hi!";
    fprintf(file, "%s\n", text);

    fclose(file);

    printf("Text successfully written.\n");

    return 0;
}

