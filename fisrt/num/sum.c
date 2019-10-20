#include "sum.h"
int sum(int var[], int a)
{
    int sum = 0;
    int min1 = min(var, a);
    for (int i = 0; i < a; i++)
	{
	    if (var[i] == min1)
		{
		    break;
		}
		sum += var[i];
	}
    return sum;
}
