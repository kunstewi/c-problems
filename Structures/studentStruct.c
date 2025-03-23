// Create a structure called student that can contain the following information:
// Roll number, Name, Department, Course, Year of joining.
// Write a function to print names of all students joined in a particular year.
// Write a function to print the names of all students in a particular department.
// Write a function to print the data of a student whose roll number is recieved by the function.

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Define the structure for a student
struct student {
    int rollNumber;
    char name[100];
    char department[100];
    char course[100];
    int yearOfJoining;
};

// Function to print names of all students who joined in a particular year
void printStudentsByYear(struct student students[], int n, int year) {
    printf("Students who joined in the year %d:\n", year);
    for (int i = 0; i < n; i++) {
        if (students[i].yearOfJoining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print names of all students in a particular department
void printStudentsByDepartment(struct student students[], int n, const char *department) {
    printf("Students in the department %s:\n", department);
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].department, department) == 0) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print the data of a student whose roll number is received by the function
void printStudentByRollNumber(struct student students[], int n, int rollNumber) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollNumber);
}

int main() {
    struct student students[MAX_STUDENTS];
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input the details of each student
    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        getchar(); // Consume the newline character left by scanf
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove the newline character
        printf("Department: ");
        fgets(students[i].department, sizeof(students[i].department), stdin);
        students[i].department[strcspn(students[i].department, "\n")] = '\0'; // Remove the newline character
        printf("Course: ");
        fgets(students[i].course, sizeof(students[i].course), stdin);
        students[i].course[strcspn(students[i].course, "\n")] = '\0'; // Remove the newline character
        printf("Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }

    // Example usage of the functions
    int year, rollNumber;
    char department[100];

    printf("Enter the year to list students: ");
    scanf("%d", &year);
    printStudentsByYear(students, n, year);

    printf("Enter the department to list students: ");
    getchar(); // Consume the newline character left by scanf
    fgets(department, sizeof(department), stdin);
    department[strcspn(department, "\n")] = '\0'; // Remove the newline character
    printStudentsByDepartment(students, n, department);

    printf("Enter the roll number to get student details: ");
    scanf("%d", &rollNumber);
    printStudentByRollNumber(students, n, rollNumber);

    return 0;
}