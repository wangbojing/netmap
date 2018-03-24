			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/skbuff.h>

	u16 dummy(const struct sk_buff *skb)
	{
	        return skb_get_queue_mapping(skb);
	}
