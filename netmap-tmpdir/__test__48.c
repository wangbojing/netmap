			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	int
	dummy(struct notifier_block *nb) {
		return register_netdevice_notifier_rh(nb);
	}
