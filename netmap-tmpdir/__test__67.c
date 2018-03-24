			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "virtio_net.c"
  
  	void
  	dummy(struct virtnet_info *vi) {
  		free_receive_bufs(vi);
  	}
