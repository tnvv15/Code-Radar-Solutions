#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        char x='A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", x++);
        }
        printf("\n");
    }
    return 0;
}
