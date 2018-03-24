			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include <linux/virtio.h>
  
  	void
  	dummy(struct virtqueue *vq) {
  		(void)virtqueue_kick(vq);
  	}
