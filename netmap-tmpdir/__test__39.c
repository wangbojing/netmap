			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/skbuff.h>

	unsigned int
	dummy(struct sk_buff *skb) {
		return skb->xmit_more;
	}
