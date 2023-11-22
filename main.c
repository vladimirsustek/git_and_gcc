#include <stdio.h>

#include "module.h"

/* How to build the app using the GCC:
 * 0.1) Operate from a command line (e.g. git bash) in the location of the main.c
 * 0.2) check whether you have gcc.exe installed and adde in the PATH variable ('gcc -v').
 *      When not, eventually instal a GCC (e.g. comming with CodeBlocksMinGW IDE).
 *
 * 1)   Generate object files *.o of all modules using 'gcc -c name.c -o name.o' for all
 *      modules. The argument -c says "do not process linking" and is necessary.
 *
 * 3)   Link all *.o files to create *.exe calling 'gcc -o app.exe name1.o up to nameX.o'
 * 4)   Call app.exe (for any linux bash you need to call ./app.exe - ./ prefix )
 */
#define VAR_NAME(VAR) #VAR

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

const char message[] = {"HelloWorld\n"};

int __cdecl main(void)
{
	int number_one = 1;
	int number_two = 2;

	printf(message);

	printf("original %s %d %s %d\n", VAR_NAME(number_one),
	number_one, VAR_NAME(number_two), number_two);
	swap_variables(&number_one, &number_two);
	printf("swapped %s %d %s %d\n", VAR_NAME(number_one),
	number_one, VAR_NAME(number_two), number_two);

	printf("%d\n", factorial_recursion(4));
	printf("%d\n", factorial_loop(4));

	return 0;
}

