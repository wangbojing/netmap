			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	int
	dummy(struct net_device *net, unsigned int txq)
	{
	    return netif_set_real_num_tx_queues(net, txq);
	}
