			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
  	#include "e1000e/e1000.h"
  
  	void dummy(struct e1000_adapter *adapter)
  	{
  		e1000e_down(adapter, false);
  	}
