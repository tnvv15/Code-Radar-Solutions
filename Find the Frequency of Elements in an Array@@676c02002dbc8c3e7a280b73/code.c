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
        int frequency=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                frequency+=1;
                i+=1;
            }
            else{
                break;
            }
        }
        printf("%d %d\n",arr[i],frequency);
    }
}