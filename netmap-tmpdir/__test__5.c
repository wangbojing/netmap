			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>


	static rx_handler_result_t dummy_rx_handler(struct sk_buff **pm)
	{
	        (void)pm;
	        return RX_HANDLER_PASS;
	}

	int dummy(void)
	{
	        return netdev_rx_handler_register(NULL, dummy_rx_handler, NULL);
	}
