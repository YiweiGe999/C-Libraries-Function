

#include "String.h"



void Itoa(int num, char s[])
{
	int i = 0;
	int j;
	int sign;
	sign = num;    
	if (sign < 0)
	{
		num = -num;  
	}

	do {
		s[i++] = num % 10 + '0'; 
	
	} while ((num /= 10) > 0);

	if (sign < 0)
	{
		s[i++] = '-';
	}
	else
	{
	}

	for (j = 0; j < i / 2; j++)
	{
		s[j] = s[j] ^ s[i - j - 1];
		s[i - j - 1] = s[j] ^ s[i - j - 1];
		s[j] = s[j] ^ s[i - j - 1];
	}
	s[i] = '\0';
}

int Atoi(const char *src)
{

	int ret = 0;
	int sign;

	/* Ignore the space that in the front of string. */
	while (*src == ' ')  
	{
		src++;
	}

	if (*src == '+' || *src == '-')
	{
		if (*src == '-')
		{
			sign = -1;
		}
		else
		{
			sign = 1;
		}
		src++;
	}
	else
	{
		sign = 1;
	}

	while (*src != '\0') 
	{
		if (*src >= '0' && *src <= '9')
		{
			ret = ret * 10 + *src - '0';
			src++;
		}
		else
		{
			ret = 0x7FFFFFFF;
			sign = 1;
			break;
		}
		
	}
	return (ret *sign);
	
}

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

/* Strings concatenation.*/
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