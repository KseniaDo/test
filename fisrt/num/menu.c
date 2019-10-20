#include <stdio.h>
#include "min.h"
#include "max.h"
#include "sum.h"
#include "diff.h"

int main(){
    int var[100], i = 0, nf; 
    char c;
    scanf("%d", &nf);
    while (c != '\n')
	{
	    scanf("%d%c", &var[i++], &c);
	}
    switch(nf)
    {
        case 0:
	        printf("%d\n", max(var, i)); 
	        break;
        case 1:
	        printf("%d\n", min(var, i)); 
	        break;
        case 2:
	        printf("%d\n", diff(var, i)); 
	        break;
        case 3:
	        printf("%d\n", sum(var, i)); 
	        break;
        default:
	        printf("Данные некорректны\n");
	        break;
    }
    return 0;
}
