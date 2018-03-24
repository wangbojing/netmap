			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <net/sch_generic.h>

	int
	dummy(struct sk_buff *skb, struct Qdisc *q, struct sk_buff **to_free) {
		return q->enqueue(skb, q, to_free);
	}
