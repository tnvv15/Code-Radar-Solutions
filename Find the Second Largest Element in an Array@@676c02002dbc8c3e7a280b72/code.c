// Your code here...
#include <stdio.h>
int Bubblesort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            if(arr[j]=arr[j+1]){
                printf("-1");
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int m;
Bubblesort(arr,n);
// if(m!=1){
printf("%d",arr[n-2]);
// }
// else{
//     printf("-1");
// }}