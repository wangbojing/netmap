			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "ixgbe/ixgbe.h"
  
  	union ixgbe_adv_tx_desc *
  	dummy(struct ixgbe_ring *ring) {
  		return IXGBE_TX_DESC_ADV(ring, 0);
  	}
