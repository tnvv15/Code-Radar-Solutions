// Your code here...
#include <stdio.h>
int main(){
    int remainder;
    int result=0;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }      
    for(int i=0;i<n;i++){
    while(arr[i]!=0){
        remainder=arr[i]%10;
        result+=remainder;
        arr[i]/=10;
        }
    printf("%d ",result);
}

}