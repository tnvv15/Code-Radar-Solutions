// Your code here...
#include <stdio.h>
#include <string.h>
// Function to reverse a string
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char str[100];
    scanf("%s", str);
    reverseString(str);
    printf("%s", str);
    return 0;
}


// #include <stdio.h>
// int main(){
//     char str[100];
//     scanf("%s",str);
//     printf("%s",strrev(str));
//     return 0;
// }