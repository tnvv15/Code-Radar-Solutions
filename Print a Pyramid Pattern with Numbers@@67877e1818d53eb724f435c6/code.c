// Your code here...
 #include <stdio.h>
 int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=0;i<n;i++){
        // for(int j=0;j<=n-i+1;j++){
        //     printf(" ");
        // }
        for(int k=0;k<=i;k++){
            printf("%d ",a);
            a+=1;
        }
        printf("\n");
    }
 }