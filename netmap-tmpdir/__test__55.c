			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "e1000e/e1000.h"
  
  	void* dummy(struct e1000_adapter *adapter,
  	        struct e1000_ring *ring)
  	{
  		return adapter->hw.hw_addr + ring->tail;
  	}
