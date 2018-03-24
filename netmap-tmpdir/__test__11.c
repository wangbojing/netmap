			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <net/net_namespace.h>

	int *
	dummy(struct pernet_operations *ops) {
		return ops->id;
	}
