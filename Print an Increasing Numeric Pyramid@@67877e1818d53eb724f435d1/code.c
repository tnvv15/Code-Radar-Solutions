// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=1;
    for(int i=1;i<=n;i++){
        for (int k = 1; k<2*i-1; k++) {  // Loop to print spaces before the numbers.
         printf(" ");
        for(int j = 1; j <= i; j++){
            printf("%d ",t++);
        }
    }
    printf("\n");
}}