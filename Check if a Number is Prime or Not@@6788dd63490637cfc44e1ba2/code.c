#include<stdio.h>
int main(){
    int a,flag=1;
    scanf("%d",&a);
if(a<=1){
    printf("Not Prime");
}
for(int i=2;i*i<=a;i++){
    if(a%i==0){
        flag=0;
        break;
    }
}
if(flag){
    printf("Prime");
}
else{
    printf("Not Prime");
}
}