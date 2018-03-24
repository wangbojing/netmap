			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "ixgbevf/ixgbevf.h"

	void *
	dummy(struct ixgbevf_ring *ring, unsigned int i)
	{
		return IXGBEVF_RX_DESC(ring, i);
	}
