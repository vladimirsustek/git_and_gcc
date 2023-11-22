#include <stdio.h>

#include "module.h"

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
