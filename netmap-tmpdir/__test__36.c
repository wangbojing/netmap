			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/netdevice.h>

	void dummy(struct napi_struct *n, int work_done) {
		napi_complete_done(n, work_done);
	}
