// OJ_0040_CalculateSn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
int main()
{
	int a,n,i;
	scanf("%d %d",&a,&n);
	int sum=0;
	int b=0;
	for(i=1;i<=n;++i)
	{
		b=b*10+a;
		sum=sum+b;
	}
	printf("%d\n",sum);
	return 0;
}
