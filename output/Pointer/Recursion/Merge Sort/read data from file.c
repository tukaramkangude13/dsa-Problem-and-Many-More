#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 10  // Maximum number of employees
#define MAX_LENGTH 50      // Maximum length for employee names

// Structure to hold employee data
typedef struct {
    int empNo;              // Employee Number
    char empName[MAX_LENGTH]; // Employee Name
} Employee;

// Function to sort employee names alphabetically using Bubble Sort
void bubbleSort(Employee employees[], int count) {
    Employee temp; // Temporary variable for swapping
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) { // Fixed loop variable from 'i' to 'j'
            // Swap if current name is greater than the next name
            if (strcmp(employees[j].empName, employees[j + 1].empName) > 0) {
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *file = fopen("employee.txt", "r"); // Open the file for reading
    Employee employees[MAX_EMPLOYEES]; // Array to hold employee data
    int count = 0; // Counter for the number of employees

    if (!file) { // Check if the file opened successfully
        printf("Error: File cannot be opened.\n");
        return 1; // Exit with error code
    }

    // Read employee data from the file
    while (fscanf(file, "%d %49[^\n]", &employees[count].empNo, employees[count].empName) == 2) {
        count++; // Increment employee count
    }

    fclose(file); // Close the file

    // Display the original employee data
    printf("Original Employee Data:\n");
    for (int i = 0; i < count; i++) {
        printf("Employee No: %d, Employee Name: %s\n", employees[i].empNo, employees[i].empName);
    }

    bubbleSort(employees, count); // Sort employees by name

    // Display the sorted employee data
    printf("\nAfter Sorting Alphabetically:\n");
    for (int i = 0; i < count; i++) {
        printf("Employee No: %d, Employee Name: %s\n", employees[i].empNo, employees[i].empName);
    }

    return 0; // Indicate successful completion
}
