// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i%2;
        for(int j=0;j<i;j++){
            printf("%d ",a);
        }
        a=a-1;
        printf("\n");
    }
}