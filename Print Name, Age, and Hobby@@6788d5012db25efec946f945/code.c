#include <stdio.h>
int main(){
    char a[100];
    int age;
    char b[100];
    scanf("%s %d %s",&a,&age,&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",age);
    printf("Hobby: %s",b);
}