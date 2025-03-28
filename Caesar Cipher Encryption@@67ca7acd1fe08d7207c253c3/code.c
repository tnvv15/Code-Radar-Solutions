void caesarCipher(char message[], int shift, char encrypted[]) {
    for (int i = 0; message[i] != '\0'; ++i) {
        char ch = message[i];

        // Encrypt uppercase letters
        if (isupper(ch)) {
            encrypted[i] = (ch - 'A' + shift) % 26 + 'A';
        }
        // Encrypt lowercase letters
        else if (islower(ch)) {
            encrypted[i] = (ch - 'a' + shift) % 26 + 'a';
        }
        // Leave non-letter characters unchanged
        else {
            encrypted[i] = ch;
        }
    }
    // Null terminate the encrypted string
    encrypted[strlen(message)] = '\0';
}
