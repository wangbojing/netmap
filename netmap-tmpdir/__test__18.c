			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	struct net_device *
	dummy(const char *name)
	{
	        return dev_get_by_name(&init_net, name);
	}
