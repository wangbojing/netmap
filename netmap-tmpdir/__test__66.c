			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include <linux/virtio.h>
  
  	unsigned int
  	dummy(struct virtqueue *vq) {
  		return virtqueue_get_vring_size(vq);
  	}
