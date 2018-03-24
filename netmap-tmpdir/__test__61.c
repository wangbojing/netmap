			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "ixgbe/ixgbe.h"
  
  	struct ixgbe_ring *
  	dummy(struct ixgbe_adapter *adapter) {
  		return adapter->tx_ring[0];
  	}
