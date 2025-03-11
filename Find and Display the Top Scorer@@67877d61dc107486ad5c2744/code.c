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
    
    // Read number of students
    scanf("%d", &n);
    struct Student students[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }

    // Find the top scorer
    struct Student topScorer = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topScorer.marks) {
            topScorer = students[i];
        }
    }

    // Print the top scorer details in the required format
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", 
           topScorer.rollno, topScorer.name, topScorer.marks);

    return 0;
}