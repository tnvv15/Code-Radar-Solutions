// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char x='A';
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            printf("%c ",x++);
            if(x>'Z'){
                x='A';
            }
        }
        printf("\n");
    }
}