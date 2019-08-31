#ifndef __STRING_H
#define __STRING_H


typedef unsigned int u32;

u32 Strlen(const char* str);
char* Strcat(char* dest, char* src, u32 u32Size);
int Strcmp(const char *str1, const char *str2);

#endif
