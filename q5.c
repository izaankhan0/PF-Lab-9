#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encryptText(char* text, char* cipherKey) {
    int textLen = strlen(text);
    int keyLen = strlen(cipherKey);
    char encryptedText[textLen + 1];
    int keyPos = 0;

    for (int i = 0; i < textLen; i++) {
        if (isalpha(text[i])) {
            int textChar = toupper(text[i]) - 'A';
            int keyChar = toupper(cipherKey[keyPos % keyLen]) - 'A';
            encryptedText[i] = ((textChar + keyChar) % 26) + 'A';
            keyPos++;
        } else {
            encryptedText[i] = text[i];
        }
    }
    encryptedText[textLen] = '\0';

    printf("Encrypted Text: %s\n", encryptedText);
}

//Method FROM IZAAN KHAN :)

int main() {
    char text[100], cipherKey[100];
    
    printf("Enter text: ");
    scanf("%[^\n]%*c", text);
    printf("Enter key: ");
    scanf("%s", cipherKey);
    
    encryptText(text, cipherKey);
    
    return 0;
}
