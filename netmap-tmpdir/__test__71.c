			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "virtio_net.c"
  
  	struct virtqueue *
  	dummy(struct virtnet_info *vi) {
  		return vi->rq[0].vq;
  	}
