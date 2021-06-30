#include "header.h"

// ? Note: A static function in C is a function that has a scope that is
// limited to its object file. This means that the static function is only
// visible in its object file.
// A function can be declared as static function by placing the static keyword
// before the function name

static bool    is_prime_opt(int n)
{
    int i;
	for (i=2;i<=floor(sqrt(abs(n)));i++)
	{
		if (n%i==0)
			return 0;	 
	}
	return 1;
}


void  get_primes_opt(int n)
{
    int i=2;
	while (i<=n)
	{
		if (is_prime_opt(i)==1)
			printf("%d \n",i);
		i++;
	}
}
