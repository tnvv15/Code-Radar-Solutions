#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) { 
        scanf("%d", &arr[i]);
    }

    if (n == 1) {
        printf("%d\n", arr[0]);
    }

    // Check if the first element is a peak
    if (arr[0] >= arr[1]) {
        printf("%d\n", arr[0]);
    }

    // Check for peak in the middle of the array
    for (int i = 1; i < n-1; i++) {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
            printf("%d\n", arr[i]);
        }
    }

    // Check if the last element is a peak
    if (arr[n-1] >= arr[n-2]) {
        printf("%d\n", arr[n-1]);
    }

    // If no peak is found (though there should be at least one peak in a valid array)
    printf("-1");

}
