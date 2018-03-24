			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "virtio_net.c"
  
  	struct scatterlist *
  	dummy(struct virtnet_info *vi) {
  		return vi->rx_sg;
  	}
