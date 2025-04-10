// // Your code here...
// #include <stdio.h>
// #include <stdlib.h>
// int Bubblesort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(abs(arr[j])>abs(arr[j+1])){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//     scanf("%d ",&arr[i]);}
//     Bubblesort(arr,n);
//     printf("%d",arr[n-2]*arr[n-1]);
// }
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2) {
            max2 = arr[i];
        }

        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int product1 = max1 * max2;
    int product2 = min1 * min2;

    printf("%d\n", (product1 > product2) ? product1 : product2);
    return 0;
}
