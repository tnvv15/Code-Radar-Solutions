// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int n, searchRoll;
    
    // Read number of students
    scanf("%d", &n);
    struct Student students[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }

    // Read roll number to search
    scanf("%d", &searchRoll);

    // Search for the student
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].rollno == searchRoll) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", 
                   students[i].rollno, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    // If student not found
    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}