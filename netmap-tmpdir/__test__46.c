			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	  #include <linux/mm.h>

	  atomic_t
	  dummy(struct page *page) {
	  	return page->_refcount;
	  }
