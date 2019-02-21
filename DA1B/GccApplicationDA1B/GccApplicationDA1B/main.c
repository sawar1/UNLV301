/*
 * GccApplicationDA1B.c
 *
 * Created: 2/10/2019 1:00:57 PM
 * Author : Home
 */ 

#include <avr/io.h>

int main()
{
	int *X = 0x0200;
	int *Y = 0x0400;
	int *Z = 0x0600;
	int a = 0;
	char sum = 0;
	char R16;
	char R17;
	char R18;
	char R19;
	
	for(a=0; a<99; a++)
	{
		sum = 0;
		sum = X;
		*X = sum;
		if(sum/3 == 0)
		{
			*Y = sum;
			Y++;
			R16 = sum;
			R17 = sum;
		}
		else
		{
			*Z = sum;
			Z++;
			R18 = sum;
			R19 = sum;
		}
		X++;
	}
}

