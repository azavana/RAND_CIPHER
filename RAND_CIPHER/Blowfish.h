#ifndef _Blowfish_h
#define _Blowfish_h

#include <stdint.h>

void Blowfish_Init (unsigned char *key, int keybytes);
void Blowfish_Encipher (uint32_t *L, uint32_t *R);
void crack_text (unsigned char *text, uint32_t *Left, uint32_t *Right, int text_len);
unsigned char *Blowfish_key();
uint32_t F (uint32_t x);

#endif
