// OJ_0038_MaximumCommonDivisorAndMinimumCommonMultiple.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
int main()
{
	int a,b,x,m,n;
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		x=a;
		a=b;
		b=x;
	}
	n=a*b;
	while(m)
	{
		m=a%b;
		a=b;
		b=m;
	}
	printf("%d %d\n",a,n/a);
	return 0;
}
 