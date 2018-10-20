// OJ_0028_DetermineWhetherAnIntegerIsAnInteger.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
int main()
{
	float a;
	while(scanf("%f",&a)!=EOF)
	{
    	if(a-(int)a<0.000001)
	    	printf("Yes\n");
    	else
	    	printf("No\n");
	}
	return 0;
}
