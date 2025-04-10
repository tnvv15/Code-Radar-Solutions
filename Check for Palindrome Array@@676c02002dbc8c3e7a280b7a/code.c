// Your code here...
#include <stdio.h>
void reverse(int arr[],int start,int end,int n){
    int temp;
    while(start<=end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    reverse(arr,start+1,end-1);
}
int storearray(int arr[],int n,int copy[]){

    for(int i=0;i<n;i++){
        copy[i]=arr[i];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int copy[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start=0;
    int end=n-1;
    storearray(arr, copy, n);       
    reverse(arr, 0, n - 1); 
    for(int i=0;i<n;i++){
        if(copy[i]!=arr[i]){
            printf("NO");
            break;
        }
    }
    printf("YES");   
}