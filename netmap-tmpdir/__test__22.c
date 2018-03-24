			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/hrtimer.h>

	u64 dummy(struct hrtimer *timer, ktime_t interval)
	{
	        return hrtimer_forward_now(timer, interval);
	}
