			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/skbuff.h>

	struct sk_buff *
	dummy(struct napi_struct *n, unsigned int l) {
		return napi_alloc_skb(n, l);
	}
