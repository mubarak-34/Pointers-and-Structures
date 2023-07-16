#include <stdio.h>

int main() {
    FILE *file = fopen("existing_file.txt", "a");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char text[] = "Adding text to the existing file.";
    fprintf(file, "%s\n", text);

    fclose(file);

    printf("Text successfully appended to the file.\n");

    return 0;
}

