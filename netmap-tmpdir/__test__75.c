			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "i40e/i40e.h"
  
  	struct i40e_ring *
  	dummy(struct i40e_vsi *vsi) {
  		return vsi->tx_rings[0];
  	}
