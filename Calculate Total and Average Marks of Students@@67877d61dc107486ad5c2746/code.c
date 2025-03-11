// Your code here...
// Your code here...
#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int n;
    float totalMarks = 0.0, averageMarks;

    // Read number of students
    scanf("%d", &n);
    struct Student students[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
        totalMarks += students[i].marks;
    }

    // Calculate average marks
    averageMarks = totalMarks / n;

    // Print total and average marks with 2 decimal places
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}