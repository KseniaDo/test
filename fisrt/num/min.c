#include "min.h"
int min(int var[], int a)
{
    
    int minel = var[0];
    for (int i = 1; i < a; i++)
    {
        if (minel > var[i])
    	{
    	    minel = var[i];
    	}
    }
    return minel;
}
