			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	struct net_device *
	dummy(void *ptr)
	{
		return netdev_notifier_info_to_dev(ptr);
	}
