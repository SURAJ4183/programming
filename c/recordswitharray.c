#include <stdio.h>
#include <string.h>

// Define a record for a Student
struct Student {
    int id;
    char name[50];
    float grade;
};

int main() {
    // Create an array of records
    struct Student students[3];

    // Assign values to each record
    students[0].id = 101;
    strcpy(students[0].name, "Suraj");
    students[0].grade = 85.5;

    students[1].id = 102;
    strcpy(students[1].name, "Lakshya");
    students[1].grade = 90.0;

    students[2].id = 103;
    strcpy(students[2].name, "Rohit");
    students[2].grade = 88.0;

    // Traverse and print all records
    for (int i = 0; i < 3; i++) {
        printf("Student %d: ID=%d, Name=%s, Grade=%.2f\n",
               i + 1, students[i].id, students[i].name, students[i].grade);
    }

    return 0;
}
