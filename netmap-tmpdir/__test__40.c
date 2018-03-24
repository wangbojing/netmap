			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/skbuff.h>

	void
	dummy(struct sk_buff *skb, int i, struct page *p,
	      int off, int size, int truesize)
	{
		skb_add_rx_frag(skb, i, p, off, size, truesize);
	}
