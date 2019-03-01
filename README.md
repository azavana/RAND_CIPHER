# RAND_CIPHER
RAND_CIPHER is a random encryption program. The program is based on three encryption program (ARC4, VMPC and Blowfish) and also uses three different kind of digital signature algorithm (SHA 256, SHA 384 and SHA 512).

# How its works ?
- 1) Salt the clear message with a pseudo random salt function
- 2) Choose randomly the digital signature
- 3) Choose randomly the encryption function
- 4) Output all

# Files included
- Header files
  - Blowfish.h
  - Colors.h
  - function.h
  - hash.h
  - ORIG_S_P.h
  - Spritz.h
  - VMPC.h
  
- .C files
  - Blowfish.c
  - function.c
  - hash.c
  - Main.c
  - Spritz.c
  - VMPC.c

- Makefile
