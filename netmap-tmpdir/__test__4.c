			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	int dummy(void)
	{
	        return netdev_rx_handler_register(NULL, NULL, NULL);
	}
