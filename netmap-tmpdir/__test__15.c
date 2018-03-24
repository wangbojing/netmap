			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
		#include <linux/poll.h>

		int
		dummy(struct poll_table_struct *pwait)
		{
		        return pwait->_key;
		}
