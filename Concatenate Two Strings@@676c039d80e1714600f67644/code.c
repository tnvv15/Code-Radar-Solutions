// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    char str2[100];
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    strcat(str1,str2);
    printf("%s",str1);
}