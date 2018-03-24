			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
 	 #include "ixgbe/ixgbe_main.c"

 	 void
 	 dummy(struct ixgbe_adapter *adapter, u64 qmask) {
 	 	ixgbe_irq_disable_queues(adapter, qmask);
 	 }
