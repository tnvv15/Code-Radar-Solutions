// Your code here...
#include <stdio.h>
#include <string.h>

struct student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int N, threshold, count = 0;
    scanf("%d", &N);

    struct student students[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &students[i].roll_number);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }

    scanf("%d", &threshold);

    for (int i = 0; i < N; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }

    printf("Count of students scoring above %d: %d\n", threshold, count);

    return 0;
}
