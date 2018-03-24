			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/wait.h>

	void *
	dummy(wait_queue_entry_t *wq) {
		return wq->private;
	}
