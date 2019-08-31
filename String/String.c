

#include "String.h"

/* Calculate the size of a string.*/
u32 Strlen(const char* str)
{
	u32 ret = 0;

	while (*str++)
	{
		ret++;
	}

	return ret;

}

/* String concatenation.*/
char* Strcat(char* dest, char* src, u32 u32Size)
{
	char* ret = dest;    
	u32 u32Cnt = 0;


	while ((*dest) &&
		(u32Cnt < u32Size))
	{
		dest++;
		u32Cnt++;
	}
	while ((*src) && (u32Cnt < (u32Size - 1)))
	{
		*dest++ = *src++;
		u32Cnt++;
	}
	if (*dest)
	{
		*dest = '\0';
	}
	else
	{
	}

	return ret;            
}

/* Compare two strings.*/
int Strcmp(const char *str1, const char *str2)
{
	int ret = 0;

	while ((*str1) && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		ret = 1;
	}
	else if (*str1 < *str2)
	{
		ret = -1;
	}
	else
	{
	}

	return ret;
}