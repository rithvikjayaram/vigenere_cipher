/*
main - done
encrypt - done
decrypt - not done
explain - done
header - done
makefile - figure out how to write
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main()
{
  int choice;

  printf("Welcome to Vigenere Cipher");

  do
  {
    printf("\n\nEnter your choice: \n");
    printf("1 - What is Vigenere Cipher (Help menu) \n");
    printf("2 - Encryption \n");
    printf("3 - Decryption \n");
    printf("4 - Exit \n");

    scanf("%d", &choice);

    char plaintext[50], key[50], encrypt[50];

    switch(choice)
    {
      case 1  : explain();
                break;

      case 2  : printf("Enter the plaintext (text to be encrypted) \n");
                scanf("%s", &plaintext);
                printf("Enter the key \n");
                scanf("%s", &key);

                strupr(plaintext);
                strupr(key);

                encryption(plaintext, key);

                break;

      case 3  : printf("Enter the encrypted text \n");
                scanf("%s", &encrypt);
                printf("Enter the key \n");
                scanf("%s", &key);

                strupr(encrypt);
                strupr(key);

                printf("call decrypt function here \n");

                break;

      case 4  : exit(0);

      default : printf("Invalid Output. Please try again. \n");
                break;
    }

  } while(choice != 4);

  return 0;
}
