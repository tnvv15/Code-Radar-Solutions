// Your code here...
#include <stdio.h>
#include <ctype.h>

void caesarCipher(char encrypted[], int shift) {
    for (int i = 0; encrypted[i] != '\0'; ++i) {
        char ch = encrypted[i];

        // Encrypt uppercase letters
        if (isupper(ch)) {
            encrypted[i] = (ch - 'A' + shift) % 26 + 'A';
        }
        // Encrypt lowercase letters
        else if (islower(ch)) {
            encrypted[i] = (ch - 'a' + shift) % 26 + 'a';
        }
        // Leave other characters unchanged
    }
}
