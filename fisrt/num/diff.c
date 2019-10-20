#include "diff.h"
int diff(int var[],int a)
{
    return max(var, a) - min(var, a);
}
