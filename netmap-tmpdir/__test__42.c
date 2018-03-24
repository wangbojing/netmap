			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/skbuff.h>

	void *
	dummy(const skb_frag_t *frag) {
		return skb_frag_address(frag);
	}
