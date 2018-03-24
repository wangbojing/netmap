			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>
	#include <linux/ethtool.h>

	int
	dummy(struct net_device *net, struct ethtool_channels *c) {
		net->ethtool_ops->get_channels(net, c);
		return net->ethtool_ops->set_channels(net, c);
	}
