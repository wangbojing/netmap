			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/etherdevice.h>

	void dummy(struct net_device *dev) {
	        eth_hw_addr_random(dev);
	}
