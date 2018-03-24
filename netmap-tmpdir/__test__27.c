			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/hrtimer.h>

	void dummy(struct hrtimer *timer, clockid_t which_clock)
	{
	        hrtimer_init(timer, which_clock, HRTIMER_MODE_REL);
	}
