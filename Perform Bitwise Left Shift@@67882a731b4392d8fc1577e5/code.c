#include <stdio.h>
int main(){
    int number,number_of_positions;
    scanf("%d %d",&number,&number_of_positions);
    printf("%d",number<<number_of_positions);
    return 0;
}