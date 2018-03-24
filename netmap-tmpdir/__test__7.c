			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  		#include <linux/netdevice.h>
  
  		u16 dummy(struct net_device_ops *ndo)
  		{
  		        return ndo->ndo_select_queue(NULL, NULL, NULL);
  		}
