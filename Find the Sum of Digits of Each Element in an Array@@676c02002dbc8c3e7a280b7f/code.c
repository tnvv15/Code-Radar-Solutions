// Your code here...
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
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
    int num= arr[i];
    while(num!=0){
        remainder=num%10;
        result+=remainder;
        num/=10;
        }
    printf("%d ",result);
   }

}