a.exe: main.o encrypt.o decrypt.o explain.o file_encrypt.o file_decrypt.o
	gcc main.o encrypt.o decrypt.o explain.o file_decrypt.o file_encrpyt.o
main.o: main.c header.h
	gcc -c main.c
encrypt.o: encrypt.c header.h
	gcc -c encrypt.c
decrypt.o: decrypt.c header.h
	gcc -c decrypt.c
explain.o: explain.c header.h
	gcc -c explain.c
file_encrypt.o: file_encrpyt.c header.h
	gcc -c file_encrpyt.c
file_decrypt.o: file_decrypt.c header.h
	gcc -c file_decrypt.c
