#include <stdio.h>

void explain()
{
  printf("\nVIGINERE CIPHER \n");
  printf("Vigenere Cipher is a method of encrypting alphabetic text. It uses a simple form of polyalphabetic substitution. A polyalphabetic cipher is any cipher based on substitution, using multiple substitution alphabets .The encryption of the original text is done using the Vigenere square or Vigenere table.");
  printf("\n\n-The table consists of the alphabets written out 26 times in different rows, each alphabet shifted cyclically to the left compared to the previous alphabet, corresponding to the 26 possible Caesar Ciphers. \n");
  printf("-At different points in the encryption process, the cipher uses a different alphabet from one of the rows. \n");
  printf("-The alphabet used at each point depends on a repeating keyword. \n\n");

  printf("  | A B C D E F G H I J K L M N O P Q R S T U V W X Y Z \n");
  printf("__|____________________________________________________ \n");
  printf("A | A B C D E F G H I J K L M N O P Q R S T U V W X Y Z \n");
  printf("B | B C D E F G H I J K L M N O P Q R S T U V W X Y Z A \n");
  printf("C | C D E F G H I J K L M N O P Q R S T U V W X Y Z A B \n");
  printf("D | D E F G H I J K L M N O P Q R S T U V W X Y Z A B C \n");
  printf("E | E F G H I J K L M N O P Q R S T U V W X Y Z A B C D \n");
  printf("F | F G H I J K L M N O P Q R S T U V W X Y Z A B C D E \n");
  printf("G | G H I J K L M N O P Q R S T U V W X Y Z A B C D E F \n");
  printf("H | H I J K L M N O P Q R S T U V W X Y Z A B C D E F G \n");
  printf("I | I J K L M N O P Q R S T U V W X Y Z A B C D E F G H \n");
  printf("J | J K L M N O P Q R S T U V W X Y Z A B C D E F G H I \n");
  printf("K | K L M N O P Q R S T U V W X Y Z A B C D E F G H I J \n");
  printf("L | L M N O P Q R S T U V W X Y Z A B C D E F G H I J K \n");
  printf("M | M N O P Q R S T U V W X Y Z A B C D E F G H I J K L \n");
  printf("N | N O P Q R S T U V W X Y Z A B C D E F G H I J K L M \n");
  printf("O | O P Q R S T U V W X Y Z A B C D E F G H I J K L M N \n");
  printf("P | P Q R S T U V W X Y Z A B C D E F G H I J K L M N O \n");
  printf("Q | Q R S T U V W X Y Z A B C D E F G H I J K L M N O P \n");
  printf("R | R S T U V W X Y Z A B C D E F G H I J K L M N O P Q \n");
  printf("S | S T U V W X Y Z A B C D E F G H I J K L M N O P Q R \n");
  printf("T | T U V W X Y Z A B C D E F G H I J K L M N O P Q R S \n");
  printf("U | U V W X Y Z A B C D E F G H I J K L M N O P Q R S T \n");
  printf("V | V W X Y Z A B C D E F G H I J K L M N O P Q R S T U \n");
  printf("W | W X Y Z A B C D E F G H I J K L M N O P Q R S T U V \n");
  printf("X | X Y Z A B C D E F G H I J K L M N O P Q R S T U V W \n");
  printf("Y | Y Z A B C D E F G H I J K L M N O P Q R S T U V W X \n");
  printf("Z | Z A B C D E F G H I J K L M N O P Q R S T U V W X Y \n");

  printf("\n\nConsider the following example : \nPlaintext - PROJECT \nKey - CIPHER \n");

  printf("Here the new generated key will be -\nNew Key : CIPHER \n\n");

  printf("The first letter of the plaintext, P is paired with C, the first letter of the key. So using row P and column C of the Vigenere square, namely R. Similarly, for the second letter of the plaintext, the second letter of the key is used, the letter at row R and column I is Z. The rest of the plaintext is enciphered in a similar fashion. \n\n");

  printf("The encrypted result is, \nEncrypted text - RZDQITV\n\n");

}

/*
The table consists of the alphabets written out 26 times in different rows, each alphabet shifted cyclically to the left compared to the previous alphabet, corresponding to the 26 possible Caesar Ciphers.
At different points in the encryption process, the cipher uses a different alphabet from one of the rows.
The alphabet used at each point depends on a repeating keyword.

Encryption
The first letter of the plaintext, G is paired with A, the first letter of the key. So use row G and column A of the Vigenère square, namely G. Similarly, for the second letter of the plaintext, the second letter of the key is used, the letter at row E and column Y is C. The rest of the plaintext is enciphered in a similar fashion.

Decryption
Decryption is performed by going to the row in the table corresponding to the key, finding the position of the ciphertext letter in this row, and then using the column’s label as the plaintext. For example, in row A (from AYUSH), the ciphertext G appears in column G, which is the first plaintext letter. Next we go to row Y (from AYUSH), locate the ciphertext C which is found in column E, thus E is the second plaintext letter.
*/
