			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/fs.h>

	void *
	dummy(struct file_operations *fops)
	{
	        return fops->unlocked_ioctl;
	}
