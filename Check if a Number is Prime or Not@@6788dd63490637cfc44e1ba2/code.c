#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    while(a>0){
        if (a==2){
            printf("Prime");
        }
        else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(1){
            printf("Not Prime");
        }
        else{
            printf("prime");
        }
        }
    }
}