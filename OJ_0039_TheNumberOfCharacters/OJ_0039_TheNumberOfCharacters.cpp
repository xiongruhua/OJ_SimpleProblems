// OJ_0039_TheNumberOfCharacters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
int main()
{
	int lettercount=0;
	int numbercount=0;
	int spacecount=0;
	int othercount=0;
	
	char str[100];
	scanf("%[^\n]",&str);
	int i=0;
	while (str[i])
	{
		if('a'<=str[i] && str[i]<='z' || 'A'<=str[i] && str[i]<='Z')
			lettercount++;
		else if('0'<=str[i] && str[i]<='9')
			numbercount++;
		else if(str[i]==' ')
			spacecount++;
		else
			othercount++;
		i++;
	}
	printf("%d %d %d %d\n",lettercount,numbercount,spacecount,othercount);
	return 0;
}
