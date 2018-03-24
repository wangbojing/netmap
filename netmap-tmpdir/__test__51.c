			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include <linux/netdevice.h>

  	struct rtnl_link_stats64 *
  	dummy(struct net_device_ops *ops, struct net_device *dev,
		struct rtnl_link_stats64 *storage)
	{
		return ops->ndo_get_stats64(dev, storage);
	}
