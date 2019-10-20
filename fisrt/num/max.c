#include "max.h"
int max(int var[], int a)
{
int maxel = var[0];
for (int i = 1; i < a; i++)
{
    if (maxel < var[i])
	{
	    maxel = var[i];
	} 
}
    
return maxel;
}
