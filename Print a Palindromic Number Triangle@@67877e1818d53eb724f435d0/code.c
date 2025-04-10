#include <stdio.h>
int main() {
    int n;
    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        // Print spaces to align the triangle
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print increasing numbers
        for (int num = 1; num <= i; num++) {
            printf("%d", num);
        }
        // Print decreasing numbers
        for (int num = i - 1; num >= 1; num--) {
            printf("%d", num);
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}
