// Your code here...
 #include <stdio.h>
 int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1");
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
 }