// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int sorted=1;
    int Bubblesort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]<arr[j+1]){
                    return sorted;
                }
                else{
                    return sorted=0;
                }
            }
        }
        if(sorted){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }
    
}