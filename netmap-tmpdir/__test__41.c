			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/skbuff.h>

	unsigned int
	dummy(const skb_frag_t *frag) {
		return skb_frag_size(frag);
	}
