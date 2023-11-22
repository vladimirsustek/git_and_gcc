#include "stdio.h"

void swap_variables(int* var1, int* var2)
{
	backup_var1 = *var1;
	*var1 = *var2;
	*var2 = backup_var1;
}

const char message[] = {"HelloWorld"};

int __cdecl main(void)
{
	int number_one = 1;
	int number_two = 2;
	
	printf(message);	
}

