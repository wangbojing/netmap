			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	struct net_device *
	dummy(int sizeof_priv, const char *name,
		unsigned char name_assign_type,
		void (*setup)(struct net_device *))
	{
		return alloc_netdev(sizeof_priv, name,
			name_assign_type, setup);
	}
