#include<stdio.h>
#include<string.h>

void encryption(char text[],char key[])
{
    int textlen = strlen(text), keylen = strlen(key), i, j;
    char newkey[textlen], encryptedmsg[textlen];

    //generating new key
    for(i = 0, j = 0; i < textlen; ++i, ++j)
	  {
        if(j == keylen)
            j = 0;

        newkey[i] = key[j];
    }
    newkey[i] = '\0';

     //encryption
     for(i = 0; i < textlen; ++i)
         encryptedmsg[i] = ((text[i] + newkey[i]) % 26) + 'A';
     encryptedmsg[i] = '\0';

	 printf("\nNew Generated Key: %s", newkey);
   printf("\nEncrypted Message: %s", encryptedmsg);
}
