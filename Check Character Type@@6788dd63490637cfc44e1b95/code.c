#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        if((ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){
            printf("Vowel")
        }
        else{
            printf("Consonant");
        }
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}