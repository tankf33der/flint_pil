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


	fmpz_set_str(n, "123344545454019845440983345568719283791827391872398129183712198719879331117512525125311931711", 10);
	qsieve_factor(factors, n);
	fmpz_factor_print(factors);
	printf("\n");


	fmpz_factor_clear(factors);
	fmpz_clear(n);
	return 0;
}
