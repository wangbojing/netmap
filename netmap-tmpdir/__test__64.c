			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "ixgbevf/ixgbevf.h"
  
  	struct ixgbevf_ring *
  	dummy(struct ixgbevf_adapter *adapter) {
  		return adapter->tx_ring[0];
  	}
