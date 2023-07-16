#include <stdio.h>

int main() {
    char file_path[200];

    printf("Enter the path for file: ");
    scanf("%s", file_path);

    FILE *file = fopen(file_path, "w");
    if (file == NULL) {
        printf("Error creating the file at %s\n", file_path);
        return 1;
    }

    printf("File created successfully at %s\n", file_path);

    fclose(file);

    return 0;
}

