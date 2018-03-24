			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/hrtimer.h>

	enum hrtimer_restart
	testmod_timer_handler(struct hrtimer *t)
	{
	        (void)t;
	        return HRTIMER_RESTART;
	}
