#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=10;i++)
    printf("%d * %d = %d",a,i,(a*i));
}