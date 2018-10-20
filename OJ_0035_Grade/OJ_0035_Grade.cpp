// OJ_0035_Grade.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	char grade;
	if(score>=90)
		grade='A';
	if(80<=score && score<90)
		grade='B';
	if(70<=score && score<80)
		grade='C';
	if(60<=score && score<70)
		grade='D';
	if(score<60)
		grade='E';
	printf("%c\n",grade);
	return 0;
}
