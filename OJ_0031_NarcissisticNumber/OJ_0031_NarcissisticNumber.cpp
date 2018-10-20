// OJ_0031_NarcissisticNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
int main()
{
	int m,n,i;
	while(1)
	{	
		int f=0;
	    scanf("%d %d",&m,&n);
	    if(m==0 && n==0)break;
	    for(i=m;i<=n;++i)
		{
		    int a,b;
	    	b=i;
	    	int r=0;
	    	while(b)
			{
		    	a=b%10;
			    r=r+a*a*a;
			    b=b/10;
			}
		    if(i==r)
			{
		    	f=1;
		    	printf("%d ",i);
			}
		}
	if(!f)
		printf("no");
	printf("\n");
	}
	return 0;
}
