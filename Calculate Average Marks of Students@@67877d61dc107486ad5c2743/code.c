// Your code here...
#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int n;
    float sum = 0.0;

    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
        sum += students[i].marks;
    }

    float average = sum / n;
    printf("Average Marks: %.2f\n", average);

    return 0;
}