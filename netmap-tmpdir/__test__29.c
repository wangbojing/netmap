			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	void * dummy(struct net_device_ops *ops) {
	       return ops->ndo_get_stats64;
	}
