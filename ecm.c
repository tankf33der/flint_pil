#include <stdio.h>
#include <stdlib.h>
#include "flint.h"
#include "fmpz.h"
#include "fmpz_factor.h"
#include "qsieve.h"


int main(void)
{
	fmpz_t factors;
	fmpz_t n;
	flint_rand_s state;
	mp_limb_t B1, B2, curves;

	fmpz_init(factors);
	fmpz_init(n);
	flint_randinit(&state);

	fmpz_set_str(n, "123344545454019845440983345568719283791827391872398129183712198719879331117512525125311931711", 10);

	fmpz_factor_ecm(factors, curves, B1, B2, &state, n);

	printf("\n");


	fmpz_clear(n);
	return 0;
}
