// OJ_0036_InverseNumber2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<string.h>
int add(int a, int b);

int main()
{
	char str[6];
	scanf("%s",str);
	int len=strlen(str);
	printf("%d\n",len);
	int i=0;
	for(i=0;i<len;++i)
	{
		printf("%c",str[i]);
		if(i!=len-1)
			printf(" ");		
	}
	printf("\n");
	for(i=0;i<len;++i)
	{
		printf("%c",str[len-i-1]);
	}
	printf("\n");

	return 0;
}
