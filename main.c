#include <stdio.h>

#define VAR_NAME(VAR) #VAR

void swap_variables(int* var1, int* var2)
{
	backup_var1 = *var1;
	*var1 = *var2;
	*var2 = backup_var1;
}

int factorial_recursion(int n)
{
	if (n = 0)
	{
		return 1;
	}
	else
	{
		return n*factorial_recursion(n-1);
	}
}

const char message[] = {"HelloWorld"};

int __cdecl main(void)
{
	int number_one = 1;
	int number_two = 2;
	
	printf(message);
	
	printf("original %s %d %s %d\n", VAR_NAME(number_one), 
	number_one, VAR_NAME(number_two), number_two);
	swap_variables(number_one, number_two);
	printf("swapped %s %d %s %d\n", VAR_NAME(number_one), 
	number_one, VAR_NAME(number_two), number_two);
	
	return 0;
}

