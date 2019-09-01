
void Itoa(int intNum, char acSrc[])
{
	int i = 0;
	int j;
	int intSign;
	intSign = intNum;
	if (intSign < 0)
	{
		intNum = -intNum;
	}

	do {
		acSrc[i++] = intNum % 10 + '0';
	
	} while ((intNum /= 10) > 0);

	if (intSign < 0)
	{
		acSrc[i++] = '-';
	}
	else
	{
	}

	for (j = 0; j < i / 2; j++)
	{
		acSrc[j] = acSrc[j] ^ acSrc[i - j - 1];
		acSrc[i - j - 1] = acSrc[j] ^ acSrc[i - j - 1];
		acSrc[j] = acSrc[j] ^ acSrc[i - j - 1];
	}
	acSrc[i] = '\0';
}

int Atoi(const char *kpcSrc)
{

	int intRet = 0;
	int intSign;

	/* Ignore the space that in the front of string. */
	while (*kpcSrc == ' ')
	{
		kpcSrc++;
	}

	if (*kpcSrc == '+' || *kpcSrc == '-')
	{
		if (*kpcSrc == '-')
		{
			intSign = -1;
		}
		else
		{
			intSign = 1;
		}
		kpcSrc++;
	}
	else
	{
		intSign = 1;
	}

	while (*kpcSrc != '\0')
	{
		if (*kpcSrc >= '0' && *kpcSrc <= '9')
		{
			intRet = intRet * 10 + *kpcSrc - '0';
			kpcSrc++;
		}
		else
		{
			intRet = 0x7FFFFFFF;
			intSign = 1;
			break;
		}
		
	}
	return (intRet *intSign);
	
}
/* Calculate the size of a string.*/
u32 Strlen(const char* kpcStr)
{
	u32 u32Ret = 0;

	while (*kpcStr++)
	{
		u32Ret++;
	}

	return u32Ret;

}


/* Strings concatenation.*/
char* Strcat(char * pcDst, const char* kpcSrc, u32 u32MaxSize)
{
	char* pcRet = pcDst;
	u32 u32Cnt = 0;


	while ((*pcDst) && (u32Cnt < u32MaxSize))
	{
		pcDst++;
		u32Cnt++;
	}
	while ((*kpcSrc) && (u32Cnt < (u32MaxSize - 1)))
	{
		*pcDst = *kpcSrc;
		pcDst++;
		kpcSrc++;
		u32Cnt++;
	}
	if (*pcDst)
	{
		*pcDst = '\0';
	}
	else
	{
	}
	return pcRet;
}

/* Compare two strings.*/
int Strcmp(const char *kpcStr1, const char *kpcStr2)
{
	int intRet = 0;

	while ((*kpcStr1) && (*kpcStr1 == *kpcStr2))
	{
		kpcStr1++;
		kpcStr2++;
	}
	if (*kpcStr1 > *kpcStr2)
	{
		intRet = 1;
	}
	else if (*kpcStr1 < *kpcStr2)
	{
		intRet = -1;
	}
	else
	{
	}

	return intRet;
}
