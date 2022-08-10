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


	fmpz_set_str(n, "12387192837918273918723981291837121933111751252512531193171", 10);
	qsieve_factor(factors, n);
	fmpz_factor_print(factors);
	printf("\n");


	fmpz_factor_clear(factors);
	fmpz_clear(n);
	return 0;
}
