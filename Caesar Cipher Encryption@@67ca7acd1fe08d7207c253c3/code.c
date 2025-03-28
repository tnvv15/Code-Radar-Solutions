// Your code here...
#include <stdio.h>
#include <ctype.h>

void caesarCipher(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; ++i) {
        char ch = text[i];

        // Encrypt uppercase letters
        if (isupper(ch)) {
            text[i] = (ch - 'A' + shift) % 26 + 'A';
        }
        // Encrypt lowercase letters
        else if (islower(ch)) {
            text[i] = (ch - 'a' + shift) % 26 + 'a';
        }
        // Leave other characters unchanged
    }
}
