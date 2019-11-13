#include <stdio.h>
#include "myMath.h"
#define EXP 2.71828;

double Pow(double x , int y)
{
	double answer = 1;
	int tmp = y;
	if(y == 0)
	{
		return 1;
	}
	if(y == 1)
	{
		return x;
	}
	if(y < 0)
	{
		y = y*-1;
		
	}
	int i;
	for(i = 0; i < y; i++)
	{
		answer = answer*x;
	}
	if(tmp < 0)
	{
		return 1/answer;
		
	}
	return answer;
}


double Exp(int x)
{
	double e = EXP;
	double answer = Pow(e,x);
	return answer;
}




