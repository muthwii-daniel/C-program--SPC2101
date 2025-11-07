#include <stdio.h>

int main() {
    FILE *fptr;
    float amount, total = 0.0;

    // 1: Write sample sales data to file
    fptr = fopen("C:\\Users\\DanielM\\Desktop\\sales.txt", "w");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fprintf(fptr, "150\n350\n500\n"); // write data to file
    fclose(fptr);

    // 2: Read and sum from same file
    fptr = fopen("C:\\Users\\DanielM\\Desktop\\sales.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fptr, "%f", &amount) == 1) {
        total += amount;
    }

    printf("Total sales for the day: %.2f\n", total);

    fclose(fptr);
    return 0;
}