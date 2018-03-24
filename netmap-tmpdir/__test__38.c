			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/skbuff.h>

	struct sk_buff *
	dummy(struct net_device *n, unsigned int l) {
		return netdev_alloc_skb_ip_align(n, l);
	}
