#include <stdio.h>

#include "module.h"

void swap_variables(int* var1, int* var2)
{
	int backup_var1 = *var1;
	*var1 = *var2;
	*var2 = backup_var1;
}

int factorial_recursion(int n)
{
	if (n == 0)
	{
        printf("%s ", __func__);
		return 1;
	}
	else
	{
		return n*factorial_recursion(n-1);
	}
}


int factorial_loop(int n)
{
    printf("%s ", __func__);
    int acc = 1;
    if (acc < 2)
    {
        while(n > 1)
        {
            acc = acc * n;
            n = n - 1;
        }
    }
    return acc;
}
