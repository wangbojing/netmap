			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	unsigned int dummy(struct net_device *n) {
		return n->hw_features;
	}
