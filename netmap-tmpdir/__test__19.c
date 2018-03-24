			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/skbuff.h>

	void dummy(struct sk_buff *skb, const void *from, const unsigned int len)
	{
	        skb_copy_to_linear_data(skb, from, len);
	}
