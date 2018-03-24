			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/skbuff.h>

	int
	dummy(const struct sk_buff *skb) {
		return skb_checksum_start_offset(skb);
	}
