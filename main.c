#include <stdio.h>

#define MAX 50

void markAttendance(int attendance[], int n);
void displayAttendance(int attendance[], int n);
void countAttendance(int attendance[], int n);

int main() {
    int attendance[MAX];
    int n, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do {
        printf("\n--- Student Attendance Management System ---\n");
        printf("1. Mark Attendance\n");
        printf("2. Display Attendance\n");
        printf("3. Count Present & Absent\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                markAttendance(attendance, n);
                break;
            case 2:
                displayAttendance(attendance, n);
                break;
            case 3:
                countAttendance(attendance, n);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}

void markAttendance(int attendance[], int n) {
    int i;
    printf("Enter attendance (1 = Present, 0 = Absent):\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &attendance[i]);
    }
}

void displayAttendance(int attendance[], int n) {
    int i;
    printf("\nAttendance List:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %s\n", i + 1,
               attendance[i] == 1 ? "Present" : "Absent");
    }
}

void countAttendance(int attendance[], int n) {
    int i, present = 0, absent = 0;
    for (i = 0; i < n; i++) {
        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }
    printf("\nTotal Present: %d", present);
    printf("\nTotal Absent: %d\n", absent);
}
