// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int frequency=0;
        if(arr[i]==arr[i+1]){
            frequency+=1;
        }
        printf("%d %d\n",arr[i],frequency);
    }
}