#include <stdio.h>;
#include <math.h>
#include "myMath.h"
#define EXP 2.71828;

double Pow(double x , int y)
{
	double answer = 1;
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
	return answer;
}


double Exp(int x)
{
	double e = EXP;
	double answer = Pow(e,x);
	if(x == 0)
	{
		return 1;
	}
	if(x == 1)
	{
		return e;
	}
	if(x > 1)
	{
		return answer;
	}
	if(x < 1)
	{
		return 1/answer;
	}
}




