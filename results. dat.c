#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int reg_no;
    float marks;
};

int main() {
    struct Student s1, s2;
    FILE *fptr;

    // Open file for writing in binary mode
    fptr = fopen("student.dat", "wb");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Get student details from user
    printf("Enter student name:");
    scanf ("%[^\n]",s1.name);
    printf("Enter student reg_no:");
    scanf("%d", &s1.reg_no);
    printf("Enter student marks:");
    scanf("%f", &s1.marks);

    // Write struct data to binary file
    fwrite(&s1, sizeof(struct Student), 1, fptr);
    fclose(fptr);

    printf("\nData written to binary file successfully!\n");

    // Open file for reading in binary mode
    fptr = fopen("student.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Read struct data back from file
    fread(&s2, sizeof(struct Student), 1, fptr);
    fclose(fptr);

    // Display data read from file
    printf("\n--- Data read from file ---\n");
    printf("Name: %s\n", s2.name);
    printf("Registration no: %d\n", s2.reg_no);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}