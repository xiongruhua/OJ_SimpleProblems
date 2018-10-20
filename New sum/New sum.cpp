// New sum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int sum=0;
	int mul=1;
	for(i=1;i<=n;++i)
	{
		sum=sum+i;
		mul=mul*i;
	}
	printf("%d %d\n",sum,mul);
	printf("%d\n",(1+n)*n/2);'
	return 0;
}
