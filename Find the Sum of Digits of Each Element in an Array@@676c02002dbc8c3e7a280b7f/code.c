// Your code here...
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }      
    for(int i=0;i<n;i++){
    int remainder;
    int result=0;
    while(abs(arr[i])!=0){
        remainder=arr[i]%10;
        result+=remainder;
        arr[i]/=10;
        }
    printf("%d ",result);
}

}