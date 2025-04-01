// Your code here...
#include <stdio.h>
    int Bubblesort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]<=arr[j+1]){
                    return 1;
                }
                else{
                    return 0;
                }
            }
        }
    }
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

        if(Bubblesort(arr,n)){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }

    }
