			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
        #include <linux/mm.h>

	int
	dummy(struct vm_operations_struct *ops,
		struct vm_area_struct *vma, struct vm_fault *vmf) {
		return ops->fault(vma, vmf);
	}
