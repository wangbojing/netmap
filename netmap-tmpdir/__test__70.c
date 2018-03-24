			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  		#include <linux/virtio.h>
  
  		int
  		dummy(struct virtqueue *vq, struct scatterlist sg[],
  			unsigned int out_num, unsigned int in_num,
  			void *data, gfp_t gfp)
  		{
  			return virtqueue_add_buf_gfp(vq, sg, out_num, in_num, data, gfp);
  		}
