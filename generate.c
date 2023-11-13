#include <stdio.h>

int main() {
    // Open the file for writing
    FILE *file = fopen("output.txt", "w");

    // Check if the file is successfully opened
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Iterate through all 10-digit numbers
    for (long long int num = 1000000000; num <= 9999999999; ++num) {
        // Write the number to the file
        fprintf(file, "%lld\n", num);
    }

    // Close the file
    fclose(file);

    printf("Successfully wrote all 10-digit numbers to the file.\n");

    return 0;
}
