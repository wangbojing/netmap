			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	unsigned int
	dummy(struct net_device *net)
	{
	    return net->num_rx_queues;
	}
