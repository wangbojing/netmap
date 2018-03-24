			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include <linux/virtio.h>
  
  	bool
  	dummy(struct virtqueue *vq) {
  		return virtqueue_enable_cb_delayed(vq);
  	}
