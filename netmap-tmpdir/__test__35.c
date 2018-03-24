			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <net/sch_generic.h>

	struct Qdisc *
	dummy(struct netdev_queue *dev_queue,
	      struct Qdisc_ops* ops,
	      unsigned int parent_id)
	{
		return qdisc_create_dflt(dev_queue,
					 ops, parent_id);
	}
