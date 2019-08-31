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
