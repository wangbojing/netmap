			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>
	#include <linux/ethtool.h>

	void
	dummy(struct net_device *net, struct ethtool_ringparam *rp) {
	        net->ethtool_ops->get_ringparam(net, rp);
	}
