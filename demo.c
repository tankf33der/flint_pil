#include <stdio.h>
#include <stdlib.h>
#include "flint.h"
#include "fmpz.h"
#include "qsieve.h"


int main(void)
{
	fmpz_factor_t factors;
	fmpz_t n;

	fmpz_factor_init(factors);
	fmpz_init(n);

	return 0;
}
