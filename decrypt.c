#include <stdio.h>
#include <string.h>

void decryption(char ciphertext[], char key[])
{
    int ciphertext_len = strlen(ciphertext);
    int key_len = strlen(key);
    int i, j;

    char new_key[ciphertext_len], decrypted_msg[ciphertext_len];

    //generating new key
    for(i = 0, j = 0; i < ciphertext_len; ++i, ++j)
    {
        if(j == key_len)
            j = 0;

        new_key[i] = key[j];
    }
    new_key[i] = '\0';

    for(i = 0; i < ciphertext_len; ++i)
        decrypted_msg[i] = (((ciphertext[i] - new_key[i]) + 26) % 26) + 'A';
    decrypted_msg[i] = '\0';

    printf("\nNew Generated Key: %s", new_key);
    printf("\nDecrypted Message: %s", decrypted_msg);
}
