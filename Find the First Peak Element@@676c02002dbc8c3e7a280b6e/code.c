// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if((arr[i]>arr[i+1])&&(arr[i]>arr[i-1]))
            break;
        }
        printf("%d",arr[i]);
    }

}