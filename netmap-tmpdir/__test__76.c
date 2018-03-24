			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
   	#include "i40e/i40e.h"
	#include <linux/bitops.h>
	#pragma GCC diagnostic error "-Wincompatible-pointer-types"

	int
	dummy(struct i40e_pf *pf) {
		return test_and_set_bit(1, &pf->state);
	}
